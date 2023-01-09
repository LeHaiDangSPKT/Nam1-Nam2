#include <stdio.h>
#include <cmath>

void nhap(float &a, float &b, float &c);
int tinh(float a, float b, float c, float &n1, float &n2);
void xuat(int tinh, float n1, float n2);

void main()
{
	float a,b,c, n1,n2;
	nhap(a,b,c);
	int kq=tinh(a,b,c,n1,n2);
	xuat(kq,n1,n2);
	scanf("%d");
}
void nhap(float &a, float &b, float &c)
{
	scanf("%f%f%f", &a, &b, &c);
    printf("%.fx^2 + %.fx + %.f = 0\n", a,b,c);
}
int tinh(float a, float b, float c, float &n1, float &n2)
{
	int t;
	if (a==0)
	{
		if (b==0)
		{
			if (c==0)
				t=12;
			else 
				t=10;
		}
		else 
		{
			n1=-c/b;
			t=11;
		}
	}
	else
	{
		float delta=b*b-4*a*c;
		if (delta==0)
		{
			n1=-b/(2*a);
			t=21;
		}
		else if (delta<0)
				t=20;
		else 
		{
			n1=(-(b)-sqrt(delta))/(2*a);
			n2=(-(b)+sqrt(delta))/(2*a);
			t=22;
		}
	}
	return t;
}

void xuat(int tinh, float n1, float n2)
{
	if      (tinh==11)
		printf("Phuong trinh co nghiem duy nhat x = %.2f", n1);
	else if (tinh==10)
		printf("Phuong trinh vo nghiem");
	else if (tinh==12)
		printf("Phuong trinh vo so nghiem");
	else if (tinh==20)
		printf("Phuong trinh vo nghiem");
	else if (tinh==21)
		printf("Phuong trinh co nghiem kep x = %.2f", n1);
	else 
	{
		printf("Phuong trinh co 2 nghiem\n");
		printf("x1 = %.2f", n1);
		printf("  x2 = %.2f", n2);

	}
}