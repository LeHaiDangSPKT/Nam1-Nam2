.text
        .globl main

main:   
        li      $t0,1           # Đọc số 1 vào thanh ghi t0
                                    #	Chuyển sang bộ đồng xử lý
        mtc1    $t0,$f0         # chuyển số nguyên từ thành ghi t0 thành kiểu float lưu trong thanh 			       ghi f0
        li.s    $f1,1.0         # Đọc giá trị 1.0 vào thanh ghi f1
                                      # Chuyển sang bộ đồng xử lý
        mfc1    $t1,$f1         # chuyển kiểu float từ thành ghi f1 thành số nguyên lưu trong thanh 			       ghi t1 
        li      $v0,10          # exit
        syscall