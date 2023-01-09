#include <stdio.h>

void nhap(int &a, int &b, int &c, int &d);
int tinh(int a, int b, int c, int d, int &tu, int &mau);
void xuat(int tinh, int tu, int mau);

void main()
{
	int a,b,c,d, tu, mau;
	nhap(a,b,c,d);
	int kq=tinh(a,b,c,d,tu,mau);
	xuat(kq, tu, mau);
}	

void nhap(int &a, int &b, int &c, int &d)
{
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
}

int tinh(int a, int b, int c, int d, int &tu, int &mau)
{
	if(d==0 || b==0)
		return 0;
	else
	{
		int sum=0;
		tu=(a*d)+(b*c);
		mau=b*d;
		for(int i=2; i<=mau; i++)
		{
			if(tu%i==0 && mau%i==0)
				sum=i;
		}
		if(sum==0)
			return 1;
		else
		{
			tu=tu/sum;
			mau=mau/sum;
			return 1;
		}
	}
}

void xuat(int tinh, int tu, int mau)
{
	if(tinh==0)
		printf("Khong ton tai");
	else
		printf("%d/%d", tu, mau);
}