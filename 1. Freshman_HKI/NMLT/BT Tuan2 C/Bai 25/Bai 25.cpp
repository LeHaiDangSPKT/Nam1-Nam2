#include <stdio.h>

void nhap(int &n);
float tinh(int n);
void xuat(float tinh);

void main()
{
	int n;
	nhap(n);
	float kq=tinh(n);
	xuat(kq);
}

void nhap(int &n)
{
	scanf("%d", &n);
}

float tinh(int n)
{
	int h=0, g=1; float sum=0;
	for(int i=1; i<=n; i++)
	{
		h+=i;
		g*=i;
		sum+=(float)h/g;
	}
	return sum;
}
void xuat(float tinh)
{
	if(tinh==0)
		printf("n khong hop le");
	else
		printf("%f", tinh);
}
