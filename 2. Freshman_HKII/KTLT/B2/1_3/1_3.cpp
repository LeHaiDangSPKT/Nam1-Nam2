#include <stdio.h>
#define MAX 1000


void NhapMang(int a[], int &n) 
{
 	printf("Nhap so phan tu cua mang: ");   scanf("%d", &n);
 	printf("Nhap phan tu: ");
    for (int i = 0;i < n; i++)
        scanf("%d", &a[i]);
}


void ThemPhanTu(int a[], int &n, int &vitri, int &x) 
{
	printf("Ban muon them phan tu vi tri thu may: "); scanf("%d", &vitri);
	printf("Gia tri phan tu: ");	scanf("%d", &x);
	for(int i = n; i > vitri; i--)
	{
        a[i] = a[i-1];
    }
    a[vitri+1] = x;
	n++;
}

void XuatMang(int a[], int n) 
{
	printf("Mang moi: ");
    for (int i = 0;i < n; i++) 
        printf("%d ", a[i]);
    printf("\n");
}

void XoaPhanTu(int a[], int &n, int &vitri) 
{
	printf("Ban muon xoa phan tu thu may: ");	scanf("%d", &vitri);
	for(int i = vitri; i < n; i++)
        a[i] = a[i+1];
	n--;
	
}
void SuaPhanTu(int a[], int n, int &vitri, int &giatri)
{
	printf("Ban muon sua phan tu thu may: "); scanf("%d", &vitri);
	printf("Gia tri phan tu moi: "); scanf("%d", &giatri);
	a[vitri] = giatri;
}
int main()
{
	int a[MAX], n, x, vitri;
	NhapMang(a, n);
	ThemPhanTu(a,n,vitri,x);
	XuatMang(a,n);
	XoaPhanTu(a,n,vitri);
	XuatMang(a,n);
	SuaPhanTu(a,n,vitri, x);
	XuatMang(a,n);
	return 0;
}
