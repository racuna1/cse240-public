(define (factorial n)
	(fact-iter 1 1 n))		;sets up the counter and product

(define (fact-iter product counter max-count)
  (if (> counter max-count)
      product				;return result
      (fact-iter (* counter product)	;multiply product
                 (+ counter 1)		;increment counter
                 max-count)))


(factorial 6)