;;;;;;;;;;
; Demostrates create a simple recursive procedure.
;
; Completion time: -1 minutes
;
; @author Acuna
; @version 1.0
;;;;;;;;;;

; uses a lambda to construct a nameless procedure and then bind it to a name
(define factorial1 (lambda (x)
  (if (= x 0)
      1
      (* x (factorial1 (- x 1))))))

; shorter definition using define.
(define (factorial2 x)
  (if (= x 0)
      1
      (* x (factorial2 (- x 1)))))

; for our purposes, either is the same. (technically the first uses more flexibility.)


(factorial1 10)
(factorial2 10)