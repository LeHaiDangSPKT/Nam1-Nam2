# Sample for lab#1 
# 1) print numbers to screen.  
# 2) add ten numbers 
# note: lab#1: add three numbers (13/9/2021) 
# Start .data segment (data!) 

.data 
Title: .asciiz "Add ten numbers! \n"  
msg1: .asciiz "Input number 1: " 
msg2: .asciiz "Input number 2: " 
msg3: .asciiz "Input number 3: " 
msg4: .asciiz "Input number 4: "
msg5: .asciiz "Input number 5: "
msg6: .asciiz "Input number 6: "
msg7: .asciiz "Input number 7: "
msg8: .asciiz "Input number 8: "
msg9: .asciiz "Input number 9: "
msg10: .asciiz "Input number 10: "
msg11: .asciiz "Sum: " 
newline: .asciiz "\n" 
.globl main 

main: 
# Start .text segment (program code) 

.text 
# Print string Title 
li 	$v0, 4 		# mã 4 dùng để in Title 
la 	$a0, Title 	# load the address of Title 
syscall 

# Print string msg1 
li 	$v0,4 		# mã 4 dùng để in msg1 
la 	$a0, msg1 	# load the address of msg1 
syscall 

# Get input number 1 and save 
li 	$v0,5 		# mã 5 dùng để đọc (int) input 
syscall
move 	$t0,$v0 	# syscall results returned in $v0 



# Print string msg2 
li 	$v0,4 		# mã 4 dùng để in input msg2 
la 	$a0, msg2 	# load the address of msg2 
syscall 

# Get input number 2 and save 
li 	$v0,5 		# mã 5 dùng để đọc (int) input 
syscall 
move 	$t1,$v0 	# syscall results returned in $v0 



# Print string msg3 
li 	$v0,4 		# mã 4 dùng để in input msg2 
la 	$a0, msg3 	# load the address of msg2 
syscall 

# Get input number 3 and save 
li 	$v0,5 		# mã 5 dùng để đọc (int) input 
syscall 
move 	$t2,$v0 	# syscall results returned in $v0 



# Print string msg4 
li 	$v0,4 		# mã 4 dùng để in input msg2 
la 	$a0, msg4 	# load the address of msg2 
syscall 

# Get input number 4 and save 
li 	$v0,5 		# mã 5 dùng để đọc (int) input 
syscall 
move 	$t3,$v0 	# syscall results returned in $v0 




# Print string msg5 
li 	$v0,4 		# mã 4 dùng để in input msg2 
la 	$a0, msg5 	# load the address of msg2 
syscall 

# Get input number 5 and save 
li 	$v0,5 		# mã 5 dùng để đọc (int) input 
syscall 
move 	$t4,$v0 	# syscall results returned in $v0 





# Print string msg6 
li 	$v0,4 		# mã 4 dùng để in input msg2 
la 	$a0, msg6 	# load the address of msg2 
syscall 

# Get input number 6 and save 
li 	$v0,5 		# mã 5 dùng để đọc (int) input 
syscall 
move 	$t5,$v0 	# syscall results returned in $v0 





# Print string msg7 
li 	$v0,4 		# mã 4 dùng để in input msg2 
la 	$a0, msg7 	# load the address of msg2 
syscall 

# Get input number 7 and save 
li 	$v0,5 		# mã 5 dùng để đọc (int) input 
syscall 
move 	$t6,$v0 	# syscall results returned in $v0 





# Print string msg8 
li 	$v0,4 		# mã 4 dùng để in input msg2 
la 	$a0, msg8 	# load the address of msg2 
syscall 

# Get input number 8 and save 
li 	$v0,5 		# mã 5 dùng để đọc (int) input 
syscall 
move 	$t7, $v0 	# syscall results returned in $v0 





# Print string msg9 
li 	$v0,4 		# mã 4 dùng để in input msg2 
la 	$a0, msg9 	# load the address of msg2 
syscall 

# Get input number 9 and save 
li 	$v0,5 		# mã 5 dùng để đọc (int) input 
syscall 
move 	$t8,$v0 	# syscall results returned in $v0





# Print string msg10 
li 	$v0,4 		# mã 4 dùng để in input msg2 
la 	$a0, msg10 	# load the address of msg2 
syscall 

# Get input number 10 and save 
li 	$v0,5 		# mã 5 dùng để đọc (int) input 
syscall 
move 	$t9,$v0 	# syscall results returned in $v0 


# Excution sum
add 	$s0, $t0, $t1 	
add 	$s0, $s0, $t2
add 	$s0, $s0, $t3
add 	$s0, $s0, $t4
add 	$s0, $s0, $t5
add 	$s0, $s0, $t6
add 	$s0, $s0, $t7
add 	$s0, $s0, $t8
add 	$s0, $s0, $t9
 

# Print string msg11 
li 	$v0, 4 		# mã 4 dùng để in msg3 
la 	$a0, msg11 
syscall 

# Print sum 
li 	$v0,1 		# mã 1 dùng để in syscall code 
move 	$a0, $s0 	# int to print must be loaded into $a0 
syscall 

# Print \n 
li 	$v0,4 		# mã 4 dùng để in input newline 
la 	$a0, newline 
syscall 

li 	$v0,10 		# 10 tell us exit program 
syscall
