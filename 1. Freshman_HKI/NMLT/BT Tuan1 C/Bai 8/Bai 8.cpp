#include <stdio.h>

void nhap(int &a, int &b);
int tinh(int a, int b, float &th);
void xuat(int tinh, float th);

void main() {
	int a,b;
	float th;
	nhap(a,b);
	int kq=tinh(a,b,th);
	xuat(kq,th);
	scanf("%d");
}

void nhap(int &a, int &b) {
	printf("Nhap a,b: ");
	scanf("%d%d", &a, &b);
}

int tinh(int a, int b, float &th) {
	int t;
	if (b==0)
		t=0;
	else
	{
		th=float(a)/b;
	}
	return t;
}

void xuat(int tinh, float th) {
	if (tinh != 0)
		printf("Thuong cua a va b la: %f", th);
	else 
		printf("Khong chia duoc");
}