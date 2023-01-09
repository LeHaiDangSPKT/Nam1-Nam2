# Reverse string and how to apply the program in real situations
# Ky thuat dich nguoc (chuoi ky tu) va ung dung 
# StudentID: 
# Fullinname: 
# Note: 

.data

msg: .asciiz "Input string/Nhap chuoi ky tu: "
string: .space 256
newline: .asciiz "\n"

.text

li $v0, 4
la $a0, msg
syscall

li $v0, 8
la $a0, string
li $a1, 256
syscall

li $v0, 4
syscall

add $t0, $a0, $zero
lb $t4, newline
loop:
	lb $t1, ($t0)
	addi $t0, $t0, 1
	beq $t4, $t1, end
	bne $t1, $zero, loop
end:
	addi $t0, $t0, -2

swap:
	lb $t2, ($a0) 
	lb $t3, ($t0)
	sb $t2, ($t0)
	sb $t3, ($a0)
	addi $a0, $a0, 1
	addi $t0, $t0, -1
	ble $a0, $t0, swap

li $v0, 4
la $a0, string
syscall

li $v0, 10
syscall