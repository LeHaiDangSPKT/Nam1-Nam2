#include <stdio.h>

void nhap(int  &n);
int tinh(int n);

void main()
{
	int n;
	nhap(n);
	int kq=tinh(n);
}

void nhap(int &n)
{
	scanf("%d", &n);
}

int tinh(int n)
{	
	for(int i=10; i<=99; i++)
	{
		int h=i%10;
		int g=i/10;;
		if(h*g==2*(h+g))
			printf("%d ", i);
	}
	return 0;
}


