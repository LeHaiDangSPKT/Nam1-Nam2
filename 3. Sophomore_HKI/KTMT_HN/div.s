.data


.text
main:
	li $t0, 10
	li $t1, 5
	
	div $t2, $t0, $t1
	
	move $a0, $t2

	li $v0, 1
	syscall

# exit
li $v0, 10
syscall
