#include <stdio.h>

void nhap(int  &n);
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
	for (int i=n; i>0; i/=10)
	{
		int h=i%10;
		if(i%2!=0)
			count++;
	}
	return count;
}

void xuat(int tinh)
{
	if(tinh==0)
		printf("So vua nhap gom tat ca cac so chan");
	else 
		printf("So vua nhap khong gom tat ca cac so chan");
}
