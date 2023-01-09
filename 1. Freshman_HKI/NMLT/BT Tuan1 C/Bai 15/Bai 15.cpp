#include <stdio.h>

void nhap(float &a, float &b, float &c, float &d);
float max(float a, float b, float c, float d);
void xuat(float max);


void main()
{
	float a,b,c,d;
	nhap(a,b,c,d);
	float kq=max(a,b,c,d);
	xuat(kq);
	scanf("%d");
}

void nhap(float &a, float &b, float &c, float &d)
{
	printf("Nhap a = ");
	scanf("%f", &a);
	printf("Nhap b = ");
	scanf("%f", &b);
	printf("Nhap c = ");
	scanf("%f", &c);
	printf("Nhap d = ");
	scanf("%f", &c);

}

float max(float a, float b, float c, float d)
{
	float t;
	if (a>b && a>c && a>d) t=a;
	else if (b>a && b>c && b>d) t=b;
	else if (c>a && c>b && c>d) t=c;
	else t=d;
	return t;
}

void xuat(float max)
{
	printf("Gia tri on nhat la: %f", max);
}