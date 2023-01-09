.data

.text
	li $t1, 0 # 
	li $t2, 10 # 

Loop: 
    	beq $t2, $t1, Exit #
    	addi $t1, $t1, 1 #
   
	li $v0, 1 #
	move $a0, $t1 #
	syscall 

j Loop 
 
Exit: 
    	li $v0, 10 #
    	syscall 