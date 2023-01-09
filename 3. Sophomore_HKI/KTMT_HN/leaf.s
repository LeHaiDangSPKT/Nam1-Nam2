# page 98
#int leaf_example (int g, int h, int i, int j)
#{
#int f;
#f = (g + h) – (i + j);
#return f;
#}

.data


.text
main:

        li        $a0, 1
        li        $a1, 2
        li        $a2, 3
        li        $a3, 4

        jal       leaf_example

        move      $a0, $v0
        li        $v0, 1
        syscall

exit:
        li        $v0, 10
        syscall

leaf_example:

        addi      $sp, $sp, -12
        lw        $s0, 0($sp)
        lw        $t0, 4($sp)
        lw        $t1, 8($sp)

        add       $t0, $a0, $a1
        add       $t1, $a2, $a3
        sub       $s0, $t0, $t1

        move      $v0, $s0

        sw        $s0, 0($sp)
        sw        $t0, 4($sp)
        sw        $t1, 8($sp)

        addi      $sp, $sp, 12

        jr        $ra