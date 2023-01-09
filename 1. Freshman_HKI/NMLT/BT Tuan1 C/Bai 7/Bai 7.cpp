#include <stdio.h>

void nhap(int &a);
int tinh(int a);
void xuat(int tinh, int a);

void main()
{
	int a;
	nhap(a);
	int kq=tinh(a);
	xuat(kq,a);
}

void nhap(int &a) 
{
	scanf("%d", &a);
}

int tinh(int a)
{	
	int t;
	if (a%100==0)
	  {if (a%400==0) 
		t=1;
	   else 
		t=0;}	   
	else if(a%4==0) 
		t=1;
	else 
		t=0;
	return t;
}

void xuat(int tinh, int a)
{	
	if (tinh==1)
		printf("%d la nam nhuan", a);
	else
		printf("%d khong phai nam nhuan", a);
}