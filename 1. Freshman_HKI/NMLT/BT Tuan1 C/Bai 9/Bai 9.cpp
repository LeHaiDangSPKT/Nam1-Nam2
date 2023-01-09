#include <stdio.h>

void nhap(int &a, int &b);
int division(int a, int b, float &th);
void xuat(float division, float th);

void main()
{
	int a,b; float th;
	nhap(a,b);
	int kq=division(a,b,th);
	xuat(kq,th);
	scanf("%d");
}
void nhap(int &a, int &b)
{
	scanf("%d%d", &a, &b);
    printf("%dx + %d = 0\n", a,b);
}
int division(int a, int b, float &th)
{
	int t;
	if (a==0)
	{
		if (b==0)
			return t=2;
		else 
			return t=0;
	}
	else
		th=-float(b)/a;
	return t=1;
}
void xuat(float division, float th)
{
	if (division==0)
		printf("Phuong trinh vo nghiem");
	else if (division==1)
		printf("Phuong trinh co nghiem x = %.2f", th);
	else
		printf("Phuong trinh vo so nghiem");
}