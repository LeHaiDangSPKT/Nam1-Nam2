#include <stdio.h>
#include <string.h>
#define N 100
struct ql
{
	char loai[N];
	char noisx[N];
	int bh;
}; typedef struct ql QL;
void nhap(QL &p, int i)
{
	printf("Nhap thong tin may thu %d:\n", i+1);
	_flushall();
	printf("Nhap loai may: "); gets(p.loai);
	_flushall();
	printf("Nhap noi san xuat may: "); gets(p.noisx);
	printf("Nhap thoi gian bao hanh: "); scanf("%d", &p.bh);
	printf("\n");
}
void nhapall(QL p[], int &n)
{
	printf("Nhap so luong may tinh: "); scanf("%d", &n);
	for (int i=0; i<n; i++)
		nhap(p[i], i);
	printf("---------------\n");
}
void xuat(QL p)
{
	_flushall();
	printf("Loai may: "); puts(p.loai);
	_flushall();
	printf("Noi san xuat may: "); puts(p.noisx);
	printf("Thoi gian bao hanh: %d", p.bh);
	printf("\n");
}
void bh1nam(QL p[], int n)
{
	printf("Cac may co thoi gian bao hanh 1 nam:\n");
	int check = 0;
	for (int i=0; i<n; i++)	
		if (p[i].bh==1)
		{
			xuat(p[i]);
			check = 1;
		}
	if (check == 0)
		printf("Khong tim thay");
	printf("---------------\n");
}
void sxMy(QL p[], int n, char sx[])
{
	_flushall();
	printf("Nhap noi san xuat muon tim: "); gets(sx);
	int check = 0;
	for (int i=0; i<n; i++)
		if (strcmp(p[i].noisx,sx)==0)
		{
			xuat(p[i]);
			check = 1;
		}
	if (check == 0)
		printf("Khong tim thay\n");
	printf("---------------\n");	
}
int main()
{
	QL p[N];
	int n;
	nhapall(p,n);
	bh1nam(p,n);
	char noisx[N];
	sxMy(p, n, noisx);
	return 0;
}
