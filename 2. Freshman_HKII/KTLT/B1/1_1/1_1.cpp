#include <stdio.h>
#include <string.h>
struct date
{
	int ngay;
	int thang;
	int nam;
};
typedef struct date DATE;

struct hocsinh
{
	char MSHS[10];
	char hoten[35];
	DATE ngaysinh;
	char diachi[55];
	char phai[5];
	float diemtb;
}; 
typedef struct hocsinh HOCSINH;

void nhap(HOCSINH &p);
void xuat(HOCSINH p);
void nhapall(HOCSINH hs[], int n);
void xuatall(HOCSINH hs[], int n);
void nhapngay(DATE &d);
void xuatngay(DATE d);
int hsdau(HOCSINH hs[], int n);
void main()
{
	HOCSINH hs[50];
	int n;
	printf("Nhap so luong hoc sinh: ");
	scanf("%d", &n);
	nhapall(hs, n);
	xuatall(hs, n);
	int dau = hsdau(hs, n);
	printf("So hoc sinh len lop la: %d", dau);
}

void nhap(HOCSINH &p)
{
	flushall();
	printf("Nhap MSHS: ");
	gets(p.MSHS);

	printf("Nhap ho va ten: ");
	gets(p.hoten);

	nhapngay(p.ngaysinh);

	flushall();
	printf("Nhap dia chi: ");
	gets(p.diachi);

	printf("Nhap gioi tinh: ");
	gets(p.phai);

	printf("Nhap diem trung binh: ");
	scanf("%f", &p.diemtb);

}

void xuat(HOCSINH p)
{
	printf("MSHS: ");
	puts(p.MSHS);

	printf("Ho va ten: ");
	puts(p.hoten);

	xuatngay(p.ngaysinh);
	printf("\n");

	printf("Dia chi: ");
	puts(p.diachi);

	printf("Gioi tinh: ");
	puts(p.phai);

	printf("Diem trung binh: %.2f", p.diemtb);
}

void nhapngay(DATE &d)
{
	
	printf("Nhap ngay: ");
	scanf("%d", &d.ngay);
	
	printf("Nhap thang: ");
	scanf("%d", &d.thang);
	 
	printf("Nhap nam: ");
	scanf("%d", &d.nam);

}

void xuatngay(DATE d)
{
	printf("Sinh ngay %d Thang %d nam %d", d.ngay, d.thang, d.nam);
}

void nhapall(HOCSINH hs[], int n)
{
	for (int i = 1; i <= n; i++)
	{
		printf("Nhap thong tin hoc sinh thu %d:\n",i);
		nhap(hs[i]);
		printf("\n\n");
	}

}
void xuatall(HOCSINH hs[], int n)
{
	for (int i = 1; i <=n; i++)
	{
		printf("Thong tin hoc sinh thu %d:\n", i);
		xuat(hs[i]);
		printf("\n\n");
	}
}

int hsdau(HOCSINH hs[], int n)
{
	int d = 0;
	for (int i = 1; i <=n; i++)
	{
		if(hs[i].diemtb >= 5)
			d++;
	}
	return d;
}
