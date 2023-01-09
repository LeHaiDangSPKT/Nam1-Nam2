#include <stdio.h>
#include <math.h>
struct phanso
{
	int tu;
	int mau;
}; typedef struct phanso PHANSO;
struct honso
{
	int nguyen;
	int tu;
	int mau;
};
typedef struct honso HONSO;

void nhap1hs(HONSO &ps);
void xuat1ps(PHANSO ps);
PHANSO doihonso(HONSO p1, HONSO p2, PHANSO &p_1, PHANSO &p_2);
int UCLN(int a, int b);
PHANSO rutgon(PHANSO ps);
PHANSO tong2ps(PHANSO ps1, PHANSO ps2);
PHANSO tich2ps(PHANSO ps1, PHANSO ps2);

int main()
{
	HONSO p1, p2;
	PHANSO p_1, p_2, tong, tich;
	
	printf("Nhap hon so thu nhat:\n");
	nhap1hs(p1);
	printf("Nhap hon so thu hai:\n");
	nhap1hs(p2);
	
	printf("Doi thanh phan so:\n");
	doihonso(p1,p2, p_1, p_2);
	
	printf("Tong hai hon so: ");
	tong = tong2ps(p_1 , p_2);
	xuat1ps(tong);
	printf("\n");

	printf("Tich hai hon so: ");
	tich = tich2ps(p_1 , p_2);
	xuat1ps(tich);
	printf("\n");
	return 0;
}	

//Nhap, Xuat 1 phan so
void nhap1hs(HONSO &p)
{
	do
	{
		printf("Nhap phan nguyen: ");
		scanf("%d", &p.nguyen);
		printf("Nhap tu so: ");
		scanf("%d", &p.tu);
		printf("Nhap mau so:");
		scanf("%d", &p.mau);
		if (p.mau == 0)
			printf("Mau so phai khac khong, moi ban nhap lai.");
		else
			break;
	}
	while (p.mau != 0);
}
void xuat1ps(PHANSO ps)
{
	printf("%d", ps.tu);
	if (ps.mau != 1)
		printf("/%d  ", ps.mau);
	else
		printf(" ");
}

//Doi hon so sang phan so
PHANSO doihonso(HONSO p1, HONSO p2, PHANSO &p_1, PHANSO &p_2)
{
	p_1.tu = p1.nguyen*p1.mau+p1.tu;
	p_1.mau = p1.mau;
	xuat1ps(p_1);
	p_2.tu = p2.nguyen*p2.mau+p2.tu;
	p_2.mau = p2.mau;
	xuat1ps(p_2);
	printf("\n");
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


//Tong 2 phan so
PHANSO tong2ps(PHANSO ps1, PHANSO ps2)
{
	PHANSO kq;
	kq.tu = ps1.tu*ps2.mau + ps1.mau*ps2.tu;
	kq.mau = ps1.mau*ps2.mau;
	kq = rutgon(kq);
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




