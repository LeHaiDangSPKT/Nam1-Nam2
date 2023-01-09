#include <stdio.h>
#include <string.h>
#define N 100
struct ql
{
	char MaHang[N];
	char Ten[N];
	int SL;
	double Gia;
	int SL_Ton;
	int BH;
}; typedef struct ql QL;
void nhap(QL &p, int i)
{
	printf("Nhap thong tin mat hang thu %d:\n",i+1);
	_flushall();
	printf("Nhap ma hang: "); gets(p.MaHang);
	_flushall();
	printf("Nhap ten hang: "); gets(p.Ten);
	printf("Nhap so luong: "); scanf("%d", &p.SL);
	printf("Nhap gia: "); scanf("%lf", &p.Gia);
	printf("Nhap so luong ton: "); scanf("%d", &p.SL_Ton);
	printf("Nhap thoi gian bao hanh: "); scanf("%d", &p.BH);
	printf("\n");
}
void nhapall(QL p[], int &n)
{
	printf("Nhap so luong mat hang: "); scanf("%d", &n);
	for (int i=0; i<n; i++)
		nhap(p[i], i);
	printf("-------------------------\n");
}
void xuat(QL p)
{
	_flushall();
	printf("Ma hang: "); puts(p.MaHang);
	_flushall();
	printf("Ten hang: "); puts(p.Ten);
	printf("So luong: %d\n", p.SL); 
	printf("Gia: %lf\n", p.Gia); 
	printf("So luong ton: %d\n", p.SL_Ton);
	printf("Thoi gian bao hanh: %d\n", p.BH); 
	printf("\n");
}
void tonnhieunhat(QL p[], int n)
{
	int max = p[0].SL_Ton;
	for (int i=1; i<n; i++)
		if (p[i].SL_Ton>max)
			max = p[i].SL_Ton;
	printf("Mat hang co so luong ton nhieu nhat la:\n");
	for (int i=0; i<n; i++)
		if (max==p[i].SL_Ton)
		{
			xuat(p[i]);
			break;
		}
	printf("-------------------------\n");		
}
void tonitnhat(QL p[], int n)
{
	int min = p[0].SL_Ton;
	for (int i=1; i<n; i++)
		if (p[i].SL_Ton<min)
			min = p[i].SL_Ton;
	printf("Mat hang co so luong ton it nhat la:\n");
	for (int i=0; i<n; i++)
		if (min==p[i].SL_Ton)
		{
			xuat(p[i]);
			break;
		}
	printf("-------------------------\n");		
}
void giacaonhat(QL p[], int n)
{
	double max = p[0].Gia;
	for (int i=1; i<n; i++)
		if (p[i].Gia>max)
			max = p[i].Gia;
	printf("Mat hang co gia tri cao nhat la:\n");
	for (int i=0; i<n; i++)
		if (max==p[i].Gia)
		{
			xuat(p[i]);
			break;
		}
	printf("-------------------------\n");	
}
void baohanh(QL p[], int n)
{
	printf("Mat hang co thoi gian lon hon 12 thang la:\n");
	for (int i=0; i<n; i++)
		if (p[i].BH>12)
			xuat(p[i]);
	printf("-------------------------\n");
}
void sapxep(QL p[], int n)
{
	int a[N];
	for (int i=0; i<n; i++)
		a[i]=p[i].SL_Ton;
	for (int i=0; i<n; i++)
		for (int j=i+1; j<n; j++)
			if (a[i]>a[j])
			{
				int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
			}
	printf("Cac mat hang duoc sap xep tang dan theo so luong ton:\n");
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			if (a[i]==p[j].SL_Ton)
			{
				xuat(p[i]);
				break;
			}
	printf("-------------------------\n");
				
}
int main()
{
	QL p[N];
	int n;
	nhapall(p,n);
	tonnhieunhat(p,n);
	tonitnhat(p,n);
	giacaonhat(p,n);
	baohanh(p,n);
	sapxep(p,n);
	return 0;
}
