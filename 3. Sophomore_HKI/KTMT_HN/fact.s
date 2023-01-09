# Nested Procedures pp 101 (textbook)
##########################
# studentID: 
# Full in name: 
##########################
# int fact (int n)
#{
#if (n < 1) return (1);
#else return (n * fact(n – 1));
#}


.text
main:
        li        $a0, 6 #  6!=6*5*4*3*2*1 
        jal       fact

        move      $a0, $v0
        li        $v0, 1 # code = 0, print
        syscall
exit:
        li        $v0, 10 # code =10, exit
        syscall

fact:
        beq       $a0, 1, L1 # explain from here

        addi      $sp, $sp, -8 	#
        sw        $ra, 0($sp)	#
        sw        $a0, 4($sp)	#

        
        addi      $a0, $a0, -1	#

        jal       fact # 
       
        lw        $a0, 4($sp) 	#
        lw        $ra, 0($sp)	#
        addi      $sp, $sp, 8 	#

        mul       $v0, $a0, $v0 #

        j         $ra
        
L1:
        li        $v0, 1 	#
        j         $ra		#

########################################
# rewrite the program using 
# call n from keyboard
# check n using the lines : 
# slti $t0,$a0,1 # test for n < 1
# beq $t0,$zero,L1 # if n >= 1, go to L1

