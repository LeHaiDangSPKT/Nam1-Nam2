#include <stdio.h>

void nhap(int &ng, int &t, int &n);
int ktrthang(int thang, int nam);
int tinh(int ng, int t, int n);
void xuat(int tinh);

void main()
{
	int ng, t, n;
	nhap(ng, t, n);
	int kq = tinh(ng, t, n);
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
			if (nam%100==0)
	           {
					if (nam%400==0) 
						return 29;
	            	else 
						return 28;
				}
	        else if(nam%4==0) 
				return 29;
	        else 
				return 28;
	}	
}

int tinh(int ng, int t, int n)
{	
	int sum = 0;
	if (ng == 1 && t == 1)
		return 1;
	for(int i=t; i>1; i--)
	{
		int h=ktrthang(i,n);
		sum+=h;
	}
	return sum+ng-1;
}

void xuat(int tinh)
{
	if(tinh==0)
		printf("Ban nhap khong hop le");
	else if (tinh == 1)
		printf("0");
	else
		printf("%d", tinh);
}
