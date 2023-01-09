#include <stdio.h>

void nhap(int &h, int &m, int &s);
int tinh(int h, int m, int s, int &g, int &p, int &gi);
void xuat(int tinh, int g, int p, int gi);

void main()
{
	int h,m,s, g, p, gi;
	nhap(h,m,s);
	int kq=tinh(h,m,s, g, p, gi);
	xuat(kq,g, p, gi);
	scanf("%d");
}

void nhap(int &h, int &m, int &s)
{
	printf("Nhap gio: ");
	scanf("%d", &h);
	printf("Nhap phut: ");
	scanf("%d", &m);
	printf("Nhap giay: ");
	scanf("%d", &s);
}

int tinh(int h, int m, int s, int &g, int &p, int &gi)
{
	int t;
	g=h; p=m; gi=s;
	if ((g>=0 && g<=23) && (p>=0 && p<=59) && (gi>=0 && gi<=59))
	{
		gi++;
		if (gi==60)
		{
			gi=00;
			p++;
		}
		if (p==60) 
		{
			p=00;
			g++;
		}
		if (g==24) 
			g=00;
		return t=1;
		if (g>=0 && g<=23)
			g++;

		return t=1;
	}
	else 
		return t=0;
}

void xuat(int tinh, int g, int p, int gi)
{
	if (tinh==0)
		printf("Khong hop le");
	else
	{
		printf("Sau do 1s..\n");
		printf("%d gio %d phut %d giay", g, p ,gi);
	}
}