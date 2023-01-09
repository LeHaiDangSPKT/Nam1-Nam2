#include<stdio.h>

void nhap(int &a, int &b, int &c);
int tinh(int a, int b, int c);
void xuat(int tinh);

void main()
{
    int a, b, c;
	nhap(a,b,c);
	int kq=tinh(a,b,c);
	xuat(kq);
	scanf("%d");
}

void nhap(int &a, int &b, int &c)
{
    printf("Nhap vao canh a: ");
    scanf("%d", &a);
    printf("Nhap vao canh b: ");
    scanf("%d", &b);
    printf("Nhap vao canh c: ");
    scanf("%d", &c);
}

int tinh(int a, int b, int c)
{
		if	(a>0 && b>0 && c>0 && a<b+c && b<a+c && c<a+b )
		{
			if	(a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b)
			{	
				if (a==b||b==c||c==a) 
					return 0; 
				else 
					return 1; 
			}
			else if(a==b && b==c)
				return 2; 
		    else if(a==b || a==c || b==c)
			    return 3; 
			else
				return 4; 
		}
		else
			return 5; 
}

void xuat(int tinh)
{
	if		(tinh==0)
		printf("Day la tam giac vuong can");
	else if (tinh==1)
		printf("Day la tam giac vuong");
	else if (tinh==2)
		printf("Day la tam giac deu");
	else if (tinh==3)
		printf("Day la tam giac can");
	else if (tinh==4)
		printf("Day la tam giac thuong");
	else 
		printf("Ba canh a, b, c khong phai la ba canh cua mot tam giac");
}