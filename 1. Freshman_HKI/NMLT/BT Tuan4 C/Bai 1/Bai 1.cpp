#include <stdio.h>
#define MAX 1000
void NhapMang(int a[], int &n) ;
void ThemPhanTu(int a[], int &n, int &vitri, int &x) ;
void XuatMang(int a[], int n) ;
void XoaPhanTu(int a[], int &n, int &vitri, int &x);
void main()
{
	int a[MAX], n, x, vitri;
	NhapMang(a, n);
	ThemPhanTu(a,n,vitri,x);
	XuatMang(a,n);
	XoaPhanTu(a,n,vitri,x);
	XuatMang(a,n);

}

void NhapMang(int a[], int &n) 
{
    scanf("%d", &n);
    for (int i = 0;i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
}


void ThemPhanTu(int a[], int &n, int &vitri, int &x) 
{
	scanf("%d", &x);
	scanf("%d", &vitri);
	for(int i = n; i > vitri; i--)
	{
        a[i] = a[i-1];
    }
    a[vitri+1] = x;
	n++;
}

void XuatMang(int a[], int n) 
{
    for (int i = 0;i < n; i++) 
    {
        printf("%d ", a[i]);
    }
}

void XoaPhanTu(int a[], int &n, int &vitri) 
{
	scanf("%d", &vitri);
	for(int i = vitri; i < n; i++)
	{
        a[i] = a[i+1];
    }
	n--;
	
}