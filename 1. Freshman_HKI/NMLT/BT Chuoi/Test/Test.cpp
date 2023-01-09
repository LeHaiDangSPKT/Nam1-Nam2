#include<stdio.h>
#include<conio.h>
#include<string.h>

main() {
  char tenkhachsan1[15] = "BLUE Hotel";
  char tenkhachsan2[15] = "GREEN Hotel";
  printf("Ten cu cua khach san la \"%s\"\n", tenkhachsan1);
  /* ti?n hành thay d?i tên c?a khách s?n */
  strcpy(tenkhachsan1, tenkhachsan2);
  /* sau dó hi?n th? tên m?i */
  printf("Sau khi doi, khach san co ten la \"%s\"\n", tenkhachsan2);
  return 0;
}