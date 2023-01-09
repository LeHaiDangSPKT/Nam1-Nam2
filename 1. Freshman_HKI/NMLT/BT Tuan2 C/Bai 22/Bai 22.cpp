#include <stdio.h>
#include <cmath>

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
	int count=0;
	for(int i=1; i<n; i++)
	{
		int h=sqrt(i);
		if((h*h)==i)
			count++;
	}
	return count;
}

void xuat(int tinh)
{
	if(tinh==0)
		printf("Khong co so chinh phuong nao nho hon n");
	else
		printf("%d", tinh);
}