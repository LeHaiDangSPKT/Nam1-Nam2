#include <stdio.h>
#include <cmath>
struct toado
{
	int toadox;
	int toadoy;
};
typedef struct toado TOADO;
void nhap(TOADO &td);
void xuat(TOADO td);
TOADO dxtung(TOADO td);
TOADO dxhoanh(TOADO td);
TOADO dxtam(TOADO td);
TOADO tong2td(TOADO td1, TOADO td2);
TOADO hieu2td(TOADO td1, TOADO td2);
int tich2td(TOADO td1, TOADO td2);
double khoangcach2td(TOADO td1, TOADO td2);
int main()
{
	TOADO td, tung, hoanh, tam;
	printf("Nhap toa do cua diem can xet:\n");
	nhap(td);
	printf("Cau a)\n");


	printf("Diem doi xung qua truc tung la:");
	tung = dxtung(td);
	xuat(tung);
	printf("\n");
	
	printf("Diem doi xung qua truc hoanh la:");
	hoanh = dxhoanh(td);
	xuat(hoanh);
	printf("\n");

	printf("Diem doi xung qua tam la:");
	tam= dxtam(td);
	xuat(tam);
	printf("\n\n");
	
	printf("Cau b)\n");


	TOADO td1, td2, tong, hieu;
	int tich;
	printf("Nhap toa do diem 1:\n");
	nhap(td1);
	printf("Nhap toa do diem 2:\n");
	nhap(td2);

	printf("Tong 2 diem trong mat phang la: ");
	tong = tong2td(td1, td2);
	xuat(tong);
	printf("\n");
	
	printf("Hieu diem trong mat phang la: ");
	hieu= hieu2td(td1, td2);
	xuat(hieu);
	printf("\n");

	tich = tich2td(td1, td2);
	printf("Tich co huong 2 diem trong mat phang la: %d\n\n", tich);

	printf("Cau c)\n");
	printf("Nhap toa do diem 1:\n");
	nhap(td1);
	printf("Nhap toa do diem 2:\n");
	nhap(td2);

	double khoangcach = khoangcach2td(td1,td2);
	printf("Khoang cach cua 2 diem do la: %.2lf", khoangcach);
	return 0;
}

void nhap(TOADO &td)
{
	printf("Nhap toa do x: ");
	scanf("%d", &td.toadox);
	printf("Nhap toa do y: ");
	scanf("%d", &td.toadoy);
}
void xuat(TOADO td)
{
	printf("(%d ; %d)", td.toadox, td.toadoy);
}

//CAU A
TOADO dxtung(TOADO td)
{
	TOADO kq;
	kq.toadox = -td.toadox;
	kq.toadoy = td.toadoy;
	return kq;
}

TOADO dxhoanh(TOADO td)
{
	TOADO kq;
	kq.toadox = td.toadox;
	kq.toadoy = -td.toadoy;
	return kq;
}

TOADO dxtam(TOADO td)
{
	TOADO kq;
	kq.toadox = -td.toadox;
	kq.toadoy = -td.toadoy;
	return kq;
}

//CAU B
TOADO tong2td(TOADO td1, TOADO td2)
{
	TOADO kq;
	kq.toadox = td1.toadox + td2.toadox;
	kq.toadoy = td1.toadoy + td2.toadoy;
	return kq;
}

TOADO hieu2td(TOADO td1, TOADO td2)
{
	TOADO kq;
	kq.toadox = td1.toadox - td2.toadox;
	kq.toadoy = td1.toadoy - td2.toadoy;
	return kq;
}

int tich2td(TOADO td1, TOADO td2)
{
	int kq= td1.toadox*td2.toadox + td1.toadoy*td2.toadoy;
	return kq;
}

//CAU C
double khoangcach2td(TOADO td1, TOADO td2)
{
	return sqrt(pow((td1.toadox-td2.toadox), 2) + pow((td1.toadoy-td2.toadoy),2));
}
