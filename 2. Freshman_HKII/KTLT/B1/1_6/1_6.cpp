#include <stdio.h>
#include <math.h>

struct phanso
{
	int tu;
	int mau;
};
typedef struct phanso PHANSO;

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
	while (ps.mau == 0);
}
void xuat1ps(PHANSO ps)
{
	if (ps.tu == 0)
		printf("0");
	else
	{
		printf("%d", ps.tu);
		if (ps.mau != 1)
			printf("/%d", ps.mau);
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
	if (ps.tu == 0)
		return ps;
	else
	{
		int ucln = UCLN(ps.tu, ps.mau);
		ps.tu = ps.tu/ucln;
		ps.mau = ps.mau/ucln;
	}
	return ps;
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

//Hieu 2 phan so
PHANSO hieu2ps(PHANSO ps1, PHANSO ps2)
{
	PHANSO kq;
	kq.tu = ps1.tu*ps2.mau - ps1.mau*ps2.tu;
	kq.mau = ps1.mau*ps2.mau;
	kq = rutgon(kq);
	return kq;
}
//Tich 2 phan so
PHANSO tich2ps(PHANSO ps1, PHANSO ps2)
{
	PHANSO kq;
	kq.tu = ps1.tu*ps2.tu;
	kq.mau = ps1.mau*ps2.mau;
	kq = rutgon(kq);
	return kq;
}
//Thuong 2 phan so
PHANSO thuong2ps(PHANSO ps1, PHANSO ps2)
{
	PHANSO kq;
	kq.tu = ps1.tu*ps2.mau;
	kq.mau = ps1.mau*ps2.tu;
	kq = rutgon(kq);
	return kq;
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
int main()
{
	PHANSO ps1, ps2, tong, hieu, tich, thuong, quydong;
	printf("Nhap phan so thu nhat: \n");
	nhap1ps(ps1);
	printf("Nhap phan so thu hai: \n");
	nhap1ps(ps2);
	
	printf("Tong 2 phan so: ");
	tong = tong2ps(ps1, ps2);
	xuat1ps(tong);
	printf("\n");
	
	printf("Hieu 2 phan so: ");
	hieu = hieu2ps(ps1, ps2);
	xuat1ps(hieu);
	printf("\n");

	printf("Tich 2 phan so: ");
	tich = tich2ps(ps1, ps2);
	xuat1ps(tich);
	printf("\n");
	
	printf("Thuong 2 phan so: ");
	thuong = thuong2ps(ps1, ps2);
	xuat1ps(thuong);
	printf("\n");
	
	int a = sosanh(ps1, ps2);
	if (a == 1)
		printf("Phan so 1 lon hon phan so 2");
	else if (a==2)
		printf("Phan so 2 lon hon phan so 1");
	else 
		printf("Hai phan so bang nhau");
	
	return 0;
}	



