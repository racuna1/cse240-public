(define (mergesort lst)
        (if (> (length lst) 1)
            (merge (mergesort (left-half lst))
                   (mergesort (right-half lst)))
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
        (else (if (< (car lst1) (car lst2))
            (cons (car lst1) (merge (cdr lst1) lst2))
            (cons (car lst2) (merge lst1 (cdr lst2)))))))

(define lst1 '(1 2 3 4 5))
(left-half lst1)
(right-half lst1)
(merge '(2 3 5) '(1 100))

(mergesort lst1)
(mergesort '(3 123 25 1 2 4))
(mergesort '(51 3 4 1 2 5 99))