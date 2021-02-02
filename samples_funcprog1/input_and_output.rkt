;;;;;;;;;;
; Demostrates taking an average with I/O and accumlator pattern.
;
; Completion time: -1 minutes
;
; @author Acuna, Chen
; @version 1.0
;;;;;;;;;;

(define (average)	                ; no parameter
	(accumulator 0 0 (read)))	    ; (read) reads anything

(define (accumulator sum n next)
        (if (not (number? next))    ; use of a sentinel
	    (compute-average sum n)
	    (accumulator (+ next sum) (+ 1 n) (read))))

(define (compute-average sum n)
	(if (> n 0) (/ sum n) -1))
