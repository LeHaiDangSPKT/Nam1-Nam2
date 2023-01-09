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
	int h=n%10, tang=0, giam=0;
	for (int i=n/10; i>0; i/=10)
	{
		int g=i%10;
		if(h>=g)
		{
			tang++;
		}
		else 
		{
			giam++;
		}
		h=g;
	}
	if(giam==0)
		return 1;
	else if(tang==0)
		return 2;
	else
		return 3;
}

void xuat(int tinh)
{
	if (tinh==1)
		printf("Cac chu so tang dan");
	else if (tinh==2)
		printf("Cac chu so giam dan");
	else
		printf("Cac chu so khong tang dan ma cung khong giam dan");

}
