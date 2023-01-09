#include <stdio.h>

struct honso
{
	int nguyen;
	int tu;
	int mau;
};
typedef struct honso HONSO;
void nhap(HONSO &hs);
void xuat(HONSO hs);
HONSO doi(HONSO hs);
int UCLN(int a, int b);
HONSO rutgon(HONSO hs);
HONSO tong2hs(HONSO hs1, HONSO hs2);
HONSO tich2hs(HONSO hs1, HONSO hs2);
void main()
{
	printf("Cau a) \n\n");
	HONSO hs, kq;
	printf("Nhap hon so can doi:\n");
	nhap(hs);
	printf("\n");

	printf("Doi hon so sang phan so: ");
	kq = doi(hs);
	xuat(kq);
	printf("\n\n");


	printf("Cau b) \n\n");
	HONSO hs1, hs2, tong, tich;
	printf("Nhap hon so 1:\n");
	nhap(hs1);
	printf("\n");

	printf("Nhap hon so 2:\n");
	nhap(hs2);
	printf("\n");

	printf("Tong 2 hon so la: ");
	tong = tong2hs(hs1, hs2);
	xuat(tong);
	printf("\n");

	printf("Tich 2 hon so la: ");
	tich = tich2hs(hs1, hs2);
	xuat(tich);

} 

void nhap(HONSO &hs)
{
	printf("Nhap phan nguyen: ");
	scanf("%d", &hs.nguyen);
	printf("Nhap tu so: ");
	scanf("%d", &hs.tu);
	printf("Nhap mau so: ");
	scanf("%d", &hs.mau);
}
void xuat(HONSO hs)
{
	printf("%d/%d", hs.tu, hs.mau);
}

HONSO doi(HONSO hs)
{
	HONSO kq;
	kq.tu = hs.tu + hs.nguyen*hs.mau;
	kq.mau = hs.mau;
	return kq;
}
int UCLN(int a, int b)
{
	while (a!=b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a;
}
HONSO rutgon(HONSO hs)
{
	HONSO kq;
	int ucln = UCLN(hs.tu, hs.mau);
	kq.tu = hs.tu / ucln;
	kq.mau = hs.mau / ucln;
	return kq;

}
HONSO tong2hs(HONSO hs1, HONSO hs2)
{
	HONSO tam1, tam2, kq;
	tam1 = doi(hs1);
	tam2 = doi(hs2);
	kq.tu = tam1.tu*tam2.mau + tam1.mau*tam2.tu;
	kq.mau = tam1.mau*tam2.mau;
	kq = rutgon(kq);
	return kq;
}

HONSO tich2hs(HONSO hs1, HONSO hs2)
{
	HONSO tam1, tam2, kq;
	tam1 = doi(hs1);
	tam2 = doi(hs2);
	kq.tu = tam1.tu*tam2.tu;
	kq.mau = tam1.mau*tam2.mau;
	kq = rutgon(kq);
	return kq;
}
