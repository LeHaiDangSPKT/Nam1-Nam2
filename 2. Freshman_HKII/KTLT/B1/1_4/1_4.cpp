#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct thoigian
{
	int ngay;
	int thang;
	int nam;
} TIME;


void nhapngay(TIME *t)
{
	printf("Nhap ngay: "); scanf("%d", &(t->ngay));
	printf("Nhap thang: "); scanf("%d", &(t->thang));
	printf("Nhap nam: "); scanf("%d", &(t->nam));
}



/*TIME *khoangCach(TIME *t1, TIME *t2)
{
	int d1, d2, d, temp;
	d1 = t1->ngay + t1->thang * 60 + t1->nam;
	d2 = t2->ngay * 3600 + t2->thang * 60 + t2->nam;
	d = abs(d1 - d2);
	TIME *t = (TIME *)calloc(1, sizeof(TIME));
	t->ngay = d / 3600;
	temp = d % 3600;
	t->thang = temp / 60;
	t->nam = temp % 60;
	return t;
}*/
int ktrnam(int nam)
{
	if (((nam%4==0) && (nam%100!=0)) || (nam%400==0))
		return 1;
	return 0;
}
int ktrthang(int thang, int nam)
{
	
	switch(thang)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: return 31;;
		case 4:
		case 6:
		case 9:
		case 11: return 30;
		case 2:
			if (ktrnam(nam)==1)
				return 29;
			return 28;
	}	
}

int preyear(TIME *t)
{
	int sum1=0;
	for(int i = 1; i<t->nam; i++)
	{
		if (ktrnam(i)==1)
			sum1+=366;
		else
			sum1+=365;
	}
	return sum1;
}
int days(TIME *t)
{
	int sum2=0;
	for(int j=1; j<t->thang; j++)
		sum2+=ktrthang(j, t->nam);
	return sum2+t->ngay;
}

int tinh(TIME *t1, TIME *t2)
{
	int a = preyear(t1) + days(t1);
	int b = preyear(t2) + days(t2);
	return abs(a-b);
}

void xuat(int tinh)
{
	if (tinh >= 0)
		printf("Khoach cach giua 2 ngay la: %d", tinh);
	else 
		printf("Ban nhap khong hop le");
}
void xuatngay(TIME *t)
{
	printf("Ngay %02d thang %02d nam %02d\n", t->ngay, t->thang, t->nam);
	return;
}

int main()
{
	TIME *t1;
	TIME *t2;
	TIME *t;
	t1 = (TIME *)calloc(1, sizeof(TIME));
	t2 = (TIME *)calloc(1, sizeof(TIME));
	nhapngay(t1);
	nhapngay(t2);
	xuatngay(t1);
	xuatngay(t2);
	int kq = tinh(t1, t2);
	xuat(kq);
}
















































