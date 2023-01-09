#include <stdio.h>
#include <string.h>
#define N 100
struct quanli
{
	char MaSSach[N];
	char TenSach[N];
	char TacGia[N];
	int SL;
}; typedef struct quanli QL;
void nhap(QL &p, int i)
{
	printf("Nhap thong tin dau sach thu %d:\n", i+1);
	_flushall();
	printf("Nhap ma so sach: "); gets(p.MaSSach);
	_flushall();
	printf("Nhap ten sach: "); gets(p.TenSach);
	_flushall();
	printf("Nhap ten tac gia: "); gets(p.TacGia);
	printf("Nhap so luong cuon sach cua dau sach: "); scanf("%d", &p.SL);
	printf("\n");
}
void nhapall(QL p[], int &n)
{
	do 
	{
		printf("Nhap so luong dau sach: "); scanf("%d", &n);
	}
	while (n>100);
	for (int i=0; i<n; i++)
		nhap(p[i], i);
	printf("---------------\n\n");
}
void xuat(QL p)
{
	_flushall();
	printf("Ma so sach: "); puts(p.MaSSach);
	_flushall();
	printf("Ten sach: "); puts(p.TenSach);
	_flushall();
	printf("Ten tac gia: "); puts(p.TacGia);
	printf("So luong cuon sach cua dau sach: %d", p.SL); 
	printf("\n");
}
void timtensach(QL p[], int n, char ten[])
{
	_flushall();
	printf("Nhap ten sach ban muon tim: "); gets(ten);
	int check = 0;
	for (int i=0; i<n; i++)
		if (strcmp(p[i].TenSach, ten)==0)
		{
			xuat(p[i]);
			check = 1;
		}
	if (check==0)
		printf("Khong tim thay\n");
	printf("---------------\n\n");
}
void tongsosach(QL p[], int n)
{
	int sum = 0;
	for (int i=0; i<n; i++)
		sum+=p[i].SL;
	printf("Tong so sach: %d", sum);
}
int main()
{
	QL p[N];
	int n;
	nhapall(p,n);
	char TenSach[N];
	timtensach(p, n, TenSach);
	tongsosach(p,n);
	return 0;
}
