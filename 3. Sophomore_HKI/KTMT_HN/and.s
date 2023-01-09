.data

.text
main: 

	li $t1, 0x00000dc0
	li $t2, 0x00003c00

	and $t0, $t1, $t2  #reg $t0 = reg $t1 & reg $t2

# print the result
	li  $v0, 1
	move $a0, $t0
	syscall 

li $v0,10 # 
syscall 