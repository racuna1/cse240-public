(define (onescomplement a-list)
	(if (null? a-list)
            '()
            (if (= (car a-list) 0)
                (cons 1 (onescomplement (cdr a-list)))
                (cons 0 (onescomplement (cdr a-list))))))

(onescomplement '(0 1 1 1 0))
