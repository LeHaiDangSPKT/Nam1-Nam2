#include<stdio.h>
#include<conio.h>
#include<string.h>

main() {
  char tenkhachsan1[15] = "BLUE Hotel";
  char tenkhachsan2[15] = "GREEN Hotel";
  printf("Ten cu cua khach san la \"%s\"\n", tenkhachsan1);
  /* ti?n h�nh thay d?i t�n c?a kh�ch s?n */
  strcpy(tenkhachsan1, tenkhachsan2);
  /* sau d� hi?n th? t�n m?i */
  printf("Sau khi doi, khach san co ten la \"%s\"\n", tenkhachsan2);
  return 0;
}