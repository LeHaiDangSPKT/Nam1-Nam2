#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct thoigian
{
	int gio;
	int phut;
	int giay;
} TIME;


bool nhapGio(TIME *t);
void xuatGio(TIME *t);
TIME *khoangCach(TIME *t1, TIME *t2);

void main()
{
	TIME *t1;
	TIME *t2;
	TIME *t;
	t1 = (TIME *)calloc(1, sizeof(TIME));
	t2 = (TIME *)calloc(1, sizeof(TIME));
	nhapGio(t1);
	nhapGio(t2);
	t = khoangCach(t1, t2);
	xuatGio(t);
}

bool nhapGio(TIME *t)
{
	printf("Nhap gio: "); scanf("%d", &(t->gio));
	printf("Nhap phut: "); scanf("%d", &(t->phut));
	printf("Nhap giay: "); scanf("%d", &(t->giay));
	return true;
}

TIME *khoangCach(TIME *t1, TIME *t2)
{
	int d1, d2, d, temp;
	d1 = t1->gio * 3600 + t1->phut * 60 + t1->giay;
	d2 = t2->gio * 3600 + t2->phut * 60 + t2->giay;
	d = abs(d1 - d2);
	TIME *t = (TIME *)calloc(1, sizeof(TIME));
	t->gio = d / 3600;
	temp = d % 3600;
	t->phut = temp / 60;
	t->giay = temp % 60;
	return t;
}

void xuatGio(TIME *t)
{
	printf("%02d:%02d:%02d", t->gio, t->phut, t->giay);
	return;
}














































/*#include <stdio.h>
#include <cmath>
#include <stdlib.h>
struct time
{
	int gio;
	int phut;
	int giay;
};
typedef struct time TIME;

void nhap(TIME &t);
void xuat(TIME t);
int moc(TIME t);
int chenhlech(TIME t1, TIME t2);
TIME khoangcach(TIME t1, TIME t2);

void main()
{
	TIME *t1, *t2, *kq; 
	t1 = ( TIME * ) malloc (sizeof ( TIME ));
	t2 = ( TIME * ) malloc ( sizeof ( TIME ));
	kq = ( TIME * ) malloc ( sizeof ( TIME ));
	printf("Nhap bo thoi gian 1:\n");
	nhap(t1);
	printf("Nhap bo thoi gian 2:\n");
	nhap(t2);
	printf("Bo thoi gian 1: ");
	xuat(t1);
	printf("Bo thoi gian 2: ");
	xuat(t2);

	kq = khoangcach(t1,t2);
	printf("Khoang cach giua 2 bo thoi gian la: ");
	xuat(kq);
}

void nhap(TIME &t)
{
	printf("Nhap gio:");
	scanf("%d", &(t->gio));
	printf("Nhap phut:");
	scanf("%d", &(t->phut));
	printf("Nhap giay:");
	scanf("%d", &(t->giay));
}

void xuat(TIME t)
{
	printf("%d gio %d phut %d giay\n", t->gio, t->phut, t->giay);
}

int moc(TIME t)
{
	int kq;
	kq = t->gio * 3600 + t->phut * 60 + t->giay;
	return kq;
}

int chenhlech(TIME t1, TIME t2)
{
	int kq = moc(t1) - moc(t2);
	kq = abs(kq);
	return kq;
}
TIME khoangcach(TIME t1, TIME t2)
{
	TIME kq;
	kq->gio = chenhlech(t1,t2) / 3600;
	kq->phut = (chenhlech(t1,t2) - kq->gio*3600) / 60;
	kq->giay = chenhlech(t1,t2) - kq->gio*3600 - kq->phut*60;
	return kq;
}
*/