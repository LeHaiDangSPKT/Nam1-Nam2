#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct diem
{
	float toan;
	float ly;
	float hoa;
	float tb;
} DIEM;
typedef struct hocsinh
{
	char MSHS[10];
	char hoten[35];
	int nam;
	DIEM diem;
} HOCSINH;

void nhap(HOCSINH &p);
void xuat(HOCSINH p);
void nhapall(HOCSINH hs[], int n);
void xuatall(HOCSINH hs[], int n);
void tbmax(HOCSINH hs[], int n);
void sxtangtheotb(HOCSINH hs[], HOCSINH tam[], int n);
void sxgiamtheodiemtoan(HOCSINH hs[], HOCSINH tam[], int n);
void tb5(HOCSINH hs[], HOCSINH tam[], int n);
void tuoimax(HOCSINH hs[], int n);
void timSV(HOCSINH hs[], int n);
int main()
{
	HOCSINH hs[50], tam1[50], tam2[50], tam3[50];
	int n;
	printf("Nhap so luong hoc sinh: ");
	scanf("%d", &n);
	nhapall(hs, n);
	xuatall(hs, n);
	
	tbmax(hs, n);
	
	sxtangtheotb(hs, tam1, n);
	printf("Danh sach hoc sinh tang dan theo diem trung binh: \n");
	for (int i = 1; i<=n; i++)
		puts(tam1[i].MSHS);
	
	sxgiamtheodiemtoan(hs, tam2, n);
	printf("Danh sach hoc sinh giam dan theo diem toan: \n");
	for (int i = 1; i<=n; i++)
		puts(tam2[i].MSHS);
	
	tb5(hs, tam3, n);
	printf("Sinh vien co diem trung binh lon hon 5 và khong co mon nao duoi 3: \n");
	for (int i = 1; i<=n; i++)
		printf("%s\n", tam3[i].MSHS);
	tuoimax(hs,n);
	timSV(hs, n);
	return 0;
}
void nhapdiem(DIEM &d)
{
	printf("Nhap diem toan: ");
	scanf("%f", &d.toan);
	printf("Nhap diem ly: ");
	scanf("%f", &d.ly);
	printf("Nhap diem hoa: ");
	scanf("%f", &d.hoa);
	printf("Nhap diem trung binh: ");
	scanf("%f", &d.tb);		
}
void nhap(HOCSINH &p)
{
	fflush(stdin);	
	printf("Nhap MSHS: ");
	gets(p.MSHS);

	printf("Nhap ho va ten: ");
	gets(p.hoten);
	
	printf("Nhap nam sinh: ");
	scanf("%d", &p.nam);
	nhapdiem(p.diem);
}
void xuatdiem(DIEM d)
{
	printf("Diem toan: %.02f\n", d.toan);
	printf("Diem ly: %.02f\n", d.ly);
	printf("Diem hoa: %.02f\n", d.hoa);
	printf("Diem trung binh: %.02f\n", d.tb);
}
void xuat(HOCSINH p)
{
	printf("MSHS: ");
	puts(p.MSHS);

	printf("Ho va ten: ");
	puts(p.hoten);

	printf("Sinh nam: %d\n", p.nam);
	
	xuatdiem(p.diem);
	
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

void tbmax(HOCSINH hs[], int n)
{
	double max = hs[1].diem.tb;
	HOCSINH tam;
	for (int i = 1; i <=n; i++)
	{
		if (hs[i].diem.tb > max)
		{
			max = hs[i].diem.tb;
			tam = hs[i]; 
		}
	}
	printf("Sinh vien co diem trung binh cao nhat la: ");
	puts(tam.MSHS);
}

void sxtangtheotb(HOCSINH hs[], HOCSINH tam[], int n)
{
	for (int i = 1; i<=n; i++)
	{
		tam[i]= hs[i];
	}
	for (int i = 1; i<=n; i++)
	{
		float min = tam[i].diem.tb;
		for (int j = i+1; j<=n; j++)
		{
			if (tam[j].diem.tb < min)
			{ 
				min = tam[j].diem.tb;
				HOCSINH check = tam[i];
					tam[i] = tam[j];
					tam[j] = check; 
			}	
		}
	}
}

void sxgiamtheodiemtoan(HOCSINH hs[], HOCSINH tam[], int n)
{
	for (int i = 1; i<=n; i++)
	{
		tam[i]= hs[i];
	}
	for (int i = 1; i<=n; i++)
	{
		float max = tam[i].diem.toan;
		for (int j = i+1; j<=n+1; j++)
		{
			if (tam[j].diem.toan > max)
			{ 
				max = tam[j].diem.toan;
				HOCSINH check = tam[i];
					tam[i] = tam[j];
					tam[j] = check; 
			}	
		}
		
	}
}
void tb5(HOCSINH hs[], HOCSINH tam[], int n)
{
	int dem=1;
	for (int i=1;i<=n;i++)
	{
		if (hs[i].diem.tb > 5)
		{
			if (hs[i].diem.toan >= 3 && hs[i].diem.ly >= 3 && hs[i].diem.hoa >= 3)
				tam[dem++] = hs[i]; 
		}
	}
}
void tuoimax(HOCSINH hs[], int n)
{
	HOCSINH t;
	for (int i=1;i<=n;i++)
	{
		int min = hs[i].nam;
		for (int j=i+1; j<=n; j++)
		{
			if (min > hs[j].nam)
			{
				t = hs[j];
				min = hs[j].nam;
			}
			else
			{
				t = hs[i];
				min = hs[i].nam;
			}
			
		}
	}
	printf("Sinh vien co tuoi lon nhat la: ");
	puts(t.MSHS);
}
void timSV(HOCSINH hs[], int n)
{
	int check;
	char ten[100];
	printf("Nhao ten sinh vien can kiem tra: ");
	scanf("%s", &ten);
	for (int i=1;i<=n;i++)
	{
		if (strstr(hs[i].hoten, ten)!=NULL)
		{
			xuat(hs[i]);
			check++;
		}
	}
}





