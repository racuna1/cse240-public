(define (start-engine wheel-sensor body-velocity)
	(let (
         (wheel-velocity (lambda (rps)	; miles per hour
                           (let (	(mypi 3.1416) 
                                        (mile-inch 63360)
                                        (wheel-diameter 15))
                             (/ (* mypi wheel-diameter rps 3600) 
                                mile-inch)  )))
   
         (error-detection (lambda(wv bv)	; 4th part of let
			(if 	(<  (abs (- bv wv)) 0.01)
				" no action"
				(if	(>  bv wv)
					"reduce brake force!"
					"reduce acceleration force!")))))
	; body of start-engine
	(error-detection (wheel-velocity wheel-sensor) body-velocity )))

(define (main)
         ; wheel-sensor=10  s(rotations per second)
         ; body-velocity=30 (miles per hour)
	(start-engine 10 30))

(main)