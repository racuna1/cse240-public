;;;;;;;;;;
; A simplementation of mergesort using higher-order programming for generic comparisons.
;
; Completion time: 0 minutes
;
; @author Acuna
; @version 1.0
;;;;;;;;;;

(define (mergesort-generic original-lst selector comparator)
  (define (mergesort-algo lst)
    (if (> (length lst) 1)
        (merge (mergesort-algo (left-half lst))
               (mergesort-algo (right-half lst)))
        lst))
  
  (define (left-half lst)
    (left-half-helper
     lst
     (floor (/ (length lst) 2))))

  (define (left-half-helper lst num)
    (if (= num 0)
        '()
        (cons (car lst)
              (left-half-helper (cdr lst) (- num 1)))))

  (define (right-half lst)
    (reverse (left-half-helper
              (reverse lst)
              (ceiling (/ (length lst) 2)))))

  (define (merge lst1 lst2)
    (cond ((null? lst1) lst2)
          ((null? lst2) lst1)
          (else (if (comparator (selector (car lst1)) (selector (car lst2)))
                    (cons (car lst1) (merge (cdr lst1) lst2))
                    (cons (car lst2) (merge lst1 (cdr lst2)))))))
  
  (mergesort-algo original-lst))


;reimplement the original "simple" mergesort as a specific version of our more generic one. 
(define mergesort (lambda (lst) (mergesort-generic
                                    lst
                                    (lambda (x) x)
                                    <
                                    )))

(mergesort '(3 123 25 1 2 4))
(mergesort '(51 3 4 1 2 5 99))

(define lst2 '(("Java" . 0) ("LISP" . 10) ("Python" . 4) ("C" . 3) ("JavaScript" . 2)))
(mergesort-generic lst2 cdr <)
(mergesort-generic lst2 car string<?)