#include <stdio.h>
#include <cmath>
struct sophuc
{
	double a;
	double b;
};
typedef struct sophuc SOPHUC;

void nhap(SOPHUC &sp);
void xuat(SOPHUC sp);
SOPHUC tong2sp(SOPHUC sp1, SOPHUC sp2);
SOPHUC hieu2sp(SOPHUC sp1, SOPHUC sp2);
SOPHUC tich2sp(SOPHUC sp1, SOPHUC sp2);
void main()
{
	SOPHUC sp1, sp2, kq1, kq2, kq3;
	printf("Nhap so phuc 1:\n");
	nhap(sp1);
	printf("Nhap so phuc 2:\n");
	nhap(sp2);

	printf("\n");
	kq1 = tong2sp(sp1, sp2);
	kq2 = hieu2sp(sp1, sp2);
	kq3 = tich2sp(sp1, sp2);
	printf("Tong 2 so phuc la: ");
	xuat(kq1);
	printf("\n");
	printf("Hieu 2 so phuc la: ");
	xuat(kq2);
	printf("\n");
	printf("Tich 2 so phuc la: ");
	xuat(kq3);
}

void nhap(SOPHUC &sp)
{
	printf("Nhap phan thuc: ");
	scanf("%lf", &sp.a);
	printf("Nhap phan ao: ");
	scanf("%lf", &sp.b);
}
void xuat(SOPHUC sp)
{
	printf("%.2lf ", sp.a);
	if (sp.b > 0)
		printf("+ ");
	else
	{
		printf("- ");
		sp.b = abs(sp.b);
	}
	printf("%.2lfi", sp.b);
}

SOPHUC tong2sp(SOPHUC sp1, SOPHUC sp2)
{
	SOPHUC kq;
	kq.a = sp1.a + sp2.a;
	kq.b = sp1.b + sp2.b;
	return kq;
}
SOPHUC hieu2sp(SOPHUC sp1, SOPHUC sp2)
{
	SOPHUC kq;
	kq.a = sp1.a - sp2.a;
	kq.b = sp1.b - sp2.b;
	return kq;
}
SOPHUC tich2sp(SOPHUC sp1, SOPHUC sp2)
{
	SOPHUC kq;
	kq.a = sp1.a*sp2.a - sp1.b*sp2.b;
	kq.b = sp1.a*sp2.b + sp2.a*sp1.b;
	return kq;
}
