#include <stdio.h>
#include <stdlib.h>
typedef struct sothuc
{
	double thuc;
	double ao;
}st;
void nhap(st &t);
void nhapmang(st t[], int &n);
st tongmang(st t[], int n);
st tichmang(st t[], int n);
void xuat(st t);
int main()
{
	int n;
	st t[100];
	nhapmang(t,n);
	st sum = tongmang(t, n);
	st mul = tichmang(t, n);
	xuat(sum);
	printf("\n");
	xuat(mul);
	return 0;
}

void nhap(st &t)
{
	printf("Phan thuc: ");
	scanf("%lf", &t.thuc);
	printf("Phan ao: ");
	scanf("%lf", &t.ao);
}
void nhapmang(st t[], int &n)
{
	printf("Nhap so luong phan tu:");
	scanf("%d", &n);
	for (int i = 0 ; i<n; i++)
	{
		printf("Nhap so thuc thu %d: \n", i+1); 
		nhap(t[i]);
	}
}

st tongmang(st t[], int n)
{
	st sum;
	sum.thuc = t[0].thuc;
	sum.ao = t[0].ao;
	for (int i = 1 ; i<n; i++)
	{
		sum.thuc += t[i].thuc;
		sum.ao += t[i].ao;
	}
	return sum;
}
st tich(st t1, st t2)
{
	st temp;
	temp.thuc = t1.thuc*t2.thuc - t1.ao*t2.ao;
	temp.ao = t1.ao*t2.thuc + t2.ao*t1.thuc;
	return temp; 
}
st tichmang(st t[], int n)
{
	st kq, temp;
	temp.thuc = t[0].thuc;
	temp.ao = t[0].ao;
	for (int i = 1 ; i<n; i++)
	{	
		temp = tich(temp, t[i]);
	}
	kq.thuc = temp.thuc;
	kq.ao = temp.ao;
	return kq;
}

void xuat(st t)
{
	printf("%.2lf ", t.thuc);
	if (t.ao < 0)
		printf("%.2lfi", t.ao);
	else 
		printf("+ %.2lfi", t.ao);
}
