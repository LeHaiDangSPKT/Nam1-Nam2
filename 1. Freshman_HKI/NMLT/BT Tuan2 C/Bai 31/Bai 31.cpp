#include <stdio.h>
#include <cmath>

void nhap(int &ng, int &t, int &n);
int ktrthang(int thang, int nam);
int ktrnam(int nam);
int preyear(int n);
int tinh(int ng1, int t1, int n1, int ng2, int t2, int n2);
void xuat(int tinh);


void main()
{
	int ng1, t1, n1, ng2, t2, n2;
	nhap(ng1, t1, n1);
	nhap(ng2, t2, n2);
	int kq = tinh(ng1, t1, n1, ng2, t2, n2);
	xuat(kq);
}


void nhap(int &ng, int &t, int &n)
{
	scanf("%d", &ng);
	scanf("%d", &t);
	scanf("%d", &n);
}


int ktrthang(int thang, int nam)
{
	switch(thang)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: return 31;;
		case 4:
		case 6:
		case 9:
		case 11: return 30;
		case 2:
			if (ktrnam(nam)==1)
				return 29;
			return 28;
	}	
}


int ktrnam(int nam)
{
	if (((nam%4==0) && (nam%100!=0)) || (nam%400==0))
		return 1;
	return 0;
}


int preyear(int n)
{
	int sum1=0;
	for(int i = 1; i<n; i++)
	{
		if (ktrnam(i)==1)
			sum1+=366;
		else
			sum1+=365;
	}
	return sum1;
}


int days(int ng, int t, int n)
{
	int sum2=0;
	for(int j=1; j<t; j++)
		sum2+=ktrthang(j, n);
	return sum2+ng;
}
int tinh(int ng1, int t1, int n1, int ng2, int t2, int n2)
{
	int a = preyear(n1) + days(ng1, t1, n1);
	int b = preyear(n2) + days(ng2, t2, n2);
	return abs(a-b);
}


void xuat(int tinh)
{
	if (tinh == 1)
		printf("0");
	else if (tinh == 0)
		printf("Ban nhap khong hop le");
	else
		printf("%d", tinh);
}

