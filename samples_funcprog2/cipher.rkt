(define (string-encryption str)		; umbrella procedure
	(encryption-recursive str 0 (string-length str)))

(define (encryption-recursive str pos len)
	(if (>= pos len)
	    ""				; empty string
	    (string-append 
		(character-encryption (string-ref str pos))
		(encryption-recursive str (+ pos 1) len))))

(define (character-encryption ch)
	(if (char-alphabetic? ch)
	    (string (character-rotation ch))
            (string ch)))               ; non-letter will not be encrypted.

(define (character-rotation ch)
	(integer->char (+ (char->integer ch) 3)))  ; key=3


(string-encryption "Hello")