#include <stdio.h>
#include <string.h>
#define N 100
struct quanli
{
	char ten[N];
	int theloai;
	char daodien[N];
	char namchinh[N];
	char nuchinh[N];
	int nam;
	char hang[N];
}; typedef struct quanli QL;
void nhap(QL &p, int i)
{
	printf("Nhap thong tin phim thu %d:\n", i+1);
	_flushall();
	printf("Nhap ten phim: "); gets(p.ten);
	printf("Nhap the loai: "); scanf("%d", &p.theloai);
	_flushall();
	printf("Nhap ten dao dien: "); gets(p.daodien);
	_flushall();
	printf("Nhap ten dien vien nam chinh: "); gets(p.namchinh);
	_flushall();
	printf("Nhap ten dien vien nu chinh: "); gets(p.nuchinh);
	printf("Nhap nam san xuat: "); scanf("%d", &p.nam);
	_flushall();
	printf("Nhap hang san xuat: "); gets(p.hang);
	printf("----------------\n");
}
void nhapall(QL p[], int &n)
{
	printf("Nhap so bo phim: "); scanf("%d", &n);
	for (int i=0; i<n; i++)
		nhap(p[i], i);
}
void xuat(QL p)
{
	_flushall();
	printf("Ten phim: "); puts(p.ten);
	printf("The loai: %d\n", p.theloai);
	_flushall();
	printf("Ten dao dien: "); puts(p.daodien);
	_flushall();
	printf("Ten dien vien nam chinh: "); puts(p.namchinh);
	_flushall();
	printf("Ten dien vien nu chinh: "); puts(p.nuchinh);
	printf("Nam san xuat: %d\n", p.nam); 
	_flushall();
	printf("Hang san xuat: "); puts(p.hang);
}
void timtheloai(QL p[], int n, int theloai)
{
	for (int i=0; i<n; i++)
		if (theloai==p[i].theloai)
			xuat(p[i]);
	printf("------------\n");
}
void timdvnam(QL p[], int n, char namdv[])
{
	for (int i=0; i<n; i++)
		if (strcmp(p[i].namchinh, namdv)==0)
			xuat(p[i]);
	printf("------------\n");
}
void timdaodien(QL p[], int n, char tendaodien[N])
{
	for (int i=0; i<n; i++)
		if (strcmp(p[i].daodien, tendaodien)==0)
			xuat(p[i]);
	printf("------------\n\n");
}
int main()
{
	printf("QUY UOC THE LOAI:\n1. Hinh su\n2.Tinh cam\n3.Hai\n");
	QL p[N];
	int n;
	nhapall(p, n);
	int theloai;
	printf("Nhap the loai can tim: "); scanf("%d", &theloai);
	timtheloai(p,n, theloai);
	char namdv[N];
	printf("Nhap ten nam dien vien muon tim: "); gets(namdv);
	timdvnam(p,n, namdv);
	char tendaodien[N];
	printf("Nhap ten dao dien muon tim: "); gets(tendaodien);
	timdaodien(p,n, tendaodien);
	return 0;
}


