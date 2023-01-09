#include <stdio.h>

void nhap(int &h, int &m, int &s);
int tinh( int h, int m, int s);
void xuat(int tinh);

void main() {
    int h,m,s;
	nhap(h,m,s);
	int kq=tinh(h,m,s);
	xuat(kq);
}

void nhap(int &h, int &m, int &s) {
	printf("Nhap gio: ");
    scanf("%d", &h);
    printf("Nhap phut: ");
    scanf("%d", &m);
    printf("Nhap giay: ");
    scanf("%d", &s);
}
 
int tinh( int h, int m, int s) {
	int t;
    if((h>=0 && h<=23) && (m>=0 &&m<=59) && (s>=0 && s<=59))
		t=1;
    else
		t=0;
    return t;
}

void xuat(int tinh) {
	if (tinh==1)
		printf("Hop le");
	else
		printf("Khong hop le");
}

