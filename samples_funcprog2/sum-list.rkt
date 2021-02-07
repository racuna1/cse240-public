(define (sum-list L)
	(if (null? L)
            "The list is empty and has no sum"
            (sum-nonempty-list L)))

(define (sum-nonempty-list L)
	(if (null? L)
            0
            (+ (car L) (sum-nonempty-list (cdr L)))))

(sum-list '())
(sum-list '(2 4 6 8))
