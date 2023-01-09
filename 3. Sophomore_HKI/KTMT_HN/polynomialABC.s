###########################
#compute Ax^2 + Bx + C 
###########################
#Student ID:
#Full in name:  
#  
.data
A:      .float  1.2
B:      .float  1.3
C:      .float  1.4

msg: .asciiz "Enter x: "
blank:  .asciiz " "
newl:   .asciiz "\n"
.text
.globl main

main:   # read input
        la      $a0, msg          # msg  
        li      $v0,4             # print string
        syscall
        
        li      $v0,6               # read single
        syscall                     # $f0 <-- x
        
        # evaluate the quadratic
        l.s     $f2, A               # sum = A
        mul.s   $f2,$f2,$f0          # sum = Ax
        l.s     $f4, B               # get B
        add.s   $f2,$f2,$f4         # sum = Bx + A
        mul.s   $f2,$f2,$f0         # sum = (ax+b)x = Ax^2 +bx
        l.s     $f4, C               # get C
        add.s   $f2,$f2,$f4         # sum = Ax^2 + Bx + C
        
        # print the result
        mov.s   $f12,$f2            # $f12 = argument
        li      $v0,2               # print single
        syscall

        la      $a0,newl            # new line
        li      $v0,4               # print string
        syscall

        li      $v0,10              # code 10 == exit
        syscall                     # Return to OS.
