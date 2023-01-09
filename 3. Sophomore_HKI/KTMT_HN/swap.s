## Exchange (SWAP) the values in valA and valB
.data
valA:   .float  0.63            
valB:   .float  -0.21       	#
                               
.text
.globl  main

main:
        l.s     $f0,valA        # $f0  <-- valA
        l.s     $f1,valB        # $f1  <-- valB
        s.s     $f0,valB        # $f0  --> valB
        s.s     $f1,valA        # $f1  --> valA

        li      $v0,10          # code 10 == exit
        syscall                 # Return to OS.
                
