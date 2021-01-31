;;;;;;;;;;
; Demostrates making decisions using cond and if forms
;
; Completion time: -1 minutes
;
; @author Acuna
; @version 1.0
;;;;;;;;;;

(define (abs1 x)
  (cond ((> x 0) x)
             ((= x 0) 0)
             ((< x 0) (- x))))

(define (abs2 x)
  (if (< x 0)
       (- x)		;notice both branches contain exactly one expression,
       x))		;we aren’t doing imperative programming!


;bonus: longer example using cond
(define grades (lambda(n)
                 (cond ((>= n 90) 'A)
                       ((>= n 80) 'B)
                       ((>= n 70) 'C)
                       ((>= n 60) 'D)
                       (else 'E); or use  (true 'E))
                       )))

;testing stuff
(abs1 10)
(abs1 -10)

(abs 10)
(abs2 -10)

(grades 90)
(grades 81)
(grades 75)
(grades 62)
(grades 59)