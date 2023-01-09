#include <stdio.h>

void nhap(int &n);
int tinh(int n);
void xuat(int tinh);

void main()
{
	int n;
	nhap(n);
	int kq=tinh(n);
	xuat(kq);
}

void nhap(int &n)
{
	scanf("%d", &n);
}

int tinh(int n)
{
	int sum=0;
	for(int i=1; i<n; i++)
	{
		if(n%i==0)
			sum+=i;
	}
	if(sum==n)
		return 1;
	else
		return 2;
}

void xuat(int tinh)
{
	if(tinh==1)
		printf("Day la so hoan hao");
	else
		printf("Day khong phai la so hoan hao");
}