;;;;;;;;;;
; Demostrates using nested let forms to define names within a scope.
;
; Completion time: -1 minutes
;
; @author Acuna, Chen
; @version 1.0
;;;;;;;;;;

(define (habitat-material height radius thickness)
    (let ((PI 3.14159265))
      (let ((cylinder (lambda (r h)
          (* h (* PI (* r r))))))
        (- (cylinder radius height)
	   (cylinder (- radius thickness) 
		     (- height (* 2 thickness)))))))

(habitat-material 1000 500 5)

; the following do not work due to the scope of let forms.
;PI
;(cylinder 1000 500)