#include <stdio.h>

void nhap(int &a, int &b, int &n);
int tinh(int a, int b, int n);
void xuat(int tinh);

void main()
{
	int a,b,n;
	nhap(a,b,n);
	int kq=tinh(a,b,n);
	xuat(kq);
}

void nhap(int &a, int &b, int &n)
{
	printf("Nhap a: "); scanf("%d", &a);
	printf("Nhap b: "); scanf("%d", &b);
	printf("Nhap n: "); scanf("%d", &n);
}

int tinh(int a, int b, int n)
{
	int sum=0;
	for(int i=1; i<n; i++)
	{
		if(i%a==0 && i%b!=0)
			sum+=i;
	}
	if(sum!0)
		return 1;
	else 
		return 0;
}

void xuat(int tinh)
{
	if(tinh==1)
		printf("%d", tinh);
	else 
		printf("Khong co");
}

