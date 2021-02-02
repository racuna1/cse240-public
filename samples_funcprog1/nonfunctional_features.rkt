;;;;;;;;;;
; Demostrates non-functional features and use of the begin form.
;
; Completion time: -1 minutes
;
; @author Acuna
; @version 1.0
;;;;;;;;;;

(define (write-result! x)
	(begin
          (display x)
          (newline)
          x
	))

(* (write-result! (+ 2 5)) 4)