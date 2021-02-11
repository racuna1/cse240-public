;;;;;;;;;;
; Demonstration of a procedure that returns procedures.
;
; Completion time: 0 minutes
;
; @author Acuna
; @version 1.0
;;;;;;;;;;

;define a procedure that builds incrementor procedures
(define (inc-maker inc)
  (lambda (x) (+ x inc)))

;build two incrementor procedures
(define inc5 (inc-maker 5))
(define inc10 (inc-maker 10))

;use incrementor procedures
(inc5 100)
(inc10 100)