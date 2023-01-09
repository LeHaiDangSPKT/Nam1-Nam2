#include <stdio.h>
#include <math.h>

struct phanso
{
	int tu;
	int mau;
};
typedef struct phanso PHANSO;

void nhap1ps(PHANSO &ps);
void xuat1ps(PHANSO ps);
void nhapmang(PHANSO ps[], int n);
void xuatmang(PHANSO ps[], int n);
int UCLN(int a, int b);
PHANSO rutgon(PHANSO ps);
int sosanh(PHANSO ps1, PHANSO ps2);
PHANSO timmax(PHANSO ps[], int n);
PHANSO tong2ps(PHANSO ps1, PHANSO ps2);
PHANSO tongcacps(PHANSO ps[], int n);
PHANSO tich2ps(PHANSO ps1, PHANSO ps2);
PHANSO tichcacps(PHANSO ps[], int n);
PHANSO nghichdao1ps(PHANSO ps);
void nghichdaocacps(PHANSO ps[], int n);


void main()
{
	PHANSO ps[50], max, tong, tich;
	int n;
	printf("Nhap so phan so: ");
	scanf("%d", &n);

	nhapmang(ps, n);
	printf("Cac phan so da nhap la: ");
	xuatmang(ps, n);
	printf("\n");

	printf("Gia tri lon nhat: ");
	max = timmax(ps, n);
	xuat1ps(max);
	printf("\n");

	printf("Tong cac phan so: ");
	tong = tongcacps(ps, n);
	xuat1ps(tong);
	printf("\n");

	printf("Tich cac phan so: ");
	tich = tichcacps(ps, n);
	xuat1ps(tich);
	printf("\n");

	printf("Cac phan so da nghich dao: ");
	nghichdaocacps(ps, n);
	xuatmang(ps, n);
}	




//Nhap, Xuat 1 phan so
void nhap1ps(PHANSO &ps)
{
	do
	{
		printf("Nhap tu so: ");
		scanf("%d", &ps.tu);
		printf("Nhap mau so:");
		scanf("%d", &ps.mau);
		if (ps.mau == 0)
			printf("Mau so phai khac khong, moi ban nhap lai.");
		else
			break;
	}
	while (ps.mau != 0);
}
void xuat1ps(PHANSO ps)
{
	printf("%d", ps.tu);
	if (ps.mau != 1)
		printf("/%d  ", ps.mau);
	else
		printf(" ");
}
//Nhap, xuat 1 mang phan so
void nhapmang(PHANSO ps[], int n)
{
	for (int i = 1; i<=n; i++)
	{
		printf("Nhap phan so thu %d:\n", i);
		nhap1ps(ps[i]);
	}
}
void xuatmang(PHANSO ps[], int n)
{
	for (int i = 1; i<=n; i++)
	{
		xuat1ps(ps[i]);
	}
}





//Tim UCLN cua 2 phan so
int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a!=b)
	{
		if (a>b)
			a = a - b;
		else
			b = b - a;
	}
	return a;
}
//Rut gon phan so
PHANSO rutgon(PHANSO ps)
{
	int ucln = UCLN(ps.tu, ps.mau);
	if (ps.tu == 0)
		return ps;
	else
	{
		ps.tu = ps.tu/ucln;
		ps.mau = ps.mau/ucln;
	}
	return ps;
}
//So sanh 2 phan so
int sosanh(PHANSO ps1, PHANSO ps2)
{
	if ((float)ps1.tu/ps1.mau > (float)ps2.tu/ps2.mau)
		return 1;
	else if ((float)ps1.tu/ps1.mau < (float)ps2.tu/ps2.mau)
		return 2;
	else
		return 3;
}




//Tim max
PHANSO timmax(PHANSO ps[], int n)
{
	PHANSO kq = ps[1];
	for (int i = 2; i<=n; i++)
	{
		if (sosanh(kq, ps[i]) == 2)
			kq = ps[i];
	}
	return kq;
}





//Tong 2 phan so
PHANSO tong2ps(PHANSO ps1, PHANSO ps2)
{
	PHANSO kq;
	kq.tu = ps1.tu*ps2.mau + ps1.mau*ps2.tu;
	kq.mau = ps1.mau*ps2.mau;
	kq = rutgon(kq);
	return kq;
}
//Tong cac phan so
PHANSO tongcacps(PHANSO ps[], int n)
{
	PHANSO kq = ps[1];
	for (int i = 2; i <= n; i++)
	{
		kq = tong2ps(kq, ps[i]);
	}
	return kq;
}






//Tich 2 phan so
PHANSO tich2ps(PHANSO ps1, PHANSO ps2)
{
	PHANSO kq;
	kq.tu = ps1.tu*ps2.tu;;
	kq.mau = ps1.mau*ps2.mau;
	kq = rutgon(kq);
	return kq;
}
//Tich cac phan so
PHANSO tichcacps(PHANSO ps[], int n)
{
	PHANSO kq = ps[1];
	for (int i = 2; i <= n; i++)
	{
		kq = tich2ps(kq, ps[i]);
	}
	return kq;
}





//Ngich dao phan so
PHANSO nghichdao1ps(PHANSO ps)
{
	PHANSO kq;
	kq.tu = ps.mau;
	kq.mau = ps.tu;
	if (kq.mau == 1)
		kq;
	return kq;
}
//Ngich dao cac phan so
void nghichdaocacps(PHANSO ps[], int n)
{
	for (int i = 1; i <= n; i++)
	{
		ps[i] = nghichdao1ps(ps[i]);		
	}
}