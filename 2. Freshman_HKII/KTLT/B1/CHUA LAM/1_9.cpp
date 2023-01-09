#include <stdio.h>
struct hinhtru
{
	double r;
	double h;
}; typedef struct hinhtru HT;
void nhap(HT &p)
{
	printf("Nhap thong tin hinh tru:\n");
	printf("Nhap ban kinh: "); scanf("%lf", &p.r);
	printf("Nhap chieu cao: "); scanf("%lf", &p.h);
	printf("-----------\n");
}
void dtxq(HT p)
{
	printf("Dien tich xung quanh hinh tru: %lf\n", 2*3.14*p.h*p.r);
}
void dttp(HT p)
{
	printf("Dien tich toan phan hinh tru: %lf\n", 2*3.14*p.r*(p.r+p.h));
}
void tt(HT p)
{
	printf("The tich hinh tru: %lf\n", 3.14*p.h*p.r*p.r);
}
int main()
{
	HT p;
	nhap(p);
	dtxq(p);
	dttp(p);
	tt(p);
	return 0;
}
