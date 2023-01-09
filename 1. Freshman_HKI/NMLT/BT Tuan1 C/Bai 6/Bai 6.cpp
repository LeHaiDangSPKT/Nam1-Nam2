#include <stdio.h>

void nhap(float &a, float &b, float &c);
int tinh(float a,float b, float c);
void xuat(int tinh); 
void main() {
    float a, b, c;
	nhap(a,b,c);
	int kq=tinh(a,b,c);
	xuat(kq);
}

void nhap(float &a, float &b, float &c) {
	printf("Nhap canh thu nhat: ");
    scanf("%f", &a);
    printf("Nhap canh thu hai: ");
    scanf("%f", &b);
    printf("Nhap canh thu ba: ");
    scanf("%f", &c);
}

int tinh(float a,float b, float c) {
	int t;
    if(a>0 && b>0 && c>0 && (a+b>c) && (a+c>b) && (b+c>a))
		t=1;
	else 	
		t=0;
	return t;
}

void xuat(int tinh) {
	if (tinh==1)
		printf("a,b,c la do dai 3 canh cua tam giac");
    else 
		printf("a,b,c khong phai la do dai 3 canh cua tam giac");
}