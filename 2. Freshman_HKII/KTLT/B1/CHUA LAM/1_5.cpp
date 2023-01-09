#include <stdio.h>
struct sophuc
{
	double a;
	double b;
}; typedef struct sophuc SP;
void nhap(SP &p1, SP &p2)
{
	printf("Nhap so phuc thu nhat:\n");
	printf("Phan thuc: "); scanf("%lf", &p1.a);
	printf("Phan ao: "); scanf("%lf", &p1.b);
	printf("\n");
	printf("Nhap so phuc thu hai:\n");
	printf("Phan thuc: "); scanf("%lf", &p2.a);
	printf("Phan ao: "); scanf("%lf", &p2.b);
	printf("\n");
}
void tong(SP p1, SP p2)
{
	printf("Tong 2 so phuc: %lf + %lfi\n", p1.a+p2.a, p1.b+p2.b);
}
void hieu(SP p1, SP p2)
{
	printf("Hieu 2 so phuc: %lf + %lfi\n", p1.a-p2.a, p1.b-p2.b);
}
void tich(SP p1, SP p2)
{
	printf("Tich 2 so phuc: %lf ", p1.a*p2.a - p1.b*p2.b);
	if ((p1.a*p2.b+p2.a*p1.b) >= 0)
		printf("+ %lfi", p1.a*p2.b+p2.a*p1.b);
	else
		printf("%lfi", p1.a*p2.b+p2.a*p1.b);
}
int main()
{
	SP p1, p2;
	nhap(p1,p2);
	tong(p1,p2);
	hieu(p1,p2);
	tich(p1,p2);
	return 0;
}
