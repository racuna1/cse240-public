(define (dtob N) 
	(if	(= N 0)
		(list '0)	    
		(append	(dtob (quotient N 2))
			(list (remainder N 2))))) 

(define (dtod N) 
	(if	(= N 0)
		(list '0)	    
		(append	(dtod (quotient N 10))
			      (list (remainder N 10)))))

(dtob 19)
(dtod 248)