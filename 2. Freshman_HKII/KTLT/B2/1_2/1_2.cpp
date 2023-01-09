#include <stdio.h>
#define N 100
int timtang(int a[N], int l, int r, int so)
{
	if (r>=l)
	{
		int mid = l+(r-l)/2;
		if (a[mid]==so)
			return mid;
		else if (a[mid] > so)
			return timtang(a,l, mid-1, so);
		else if (a[mid]<so)
			return timtang(a,mid+1,r,so);
 	}
	else
		return -1;
}
int timgiam(int a[N], int l, int r, int so)
{
	if (r>=l)
	{
		int mid = l+(r-l)/2;
		if (a[mid]==so)
			return mid;
		else if (a[mid] > so)
			return timgiam(a,mid+1, r, so);
		else if (a[mid] < so)
			return timgiam(a,l,mid-1,so);
	}
	else
		return -1;
}
int kiemtra(int a[], int n)
{
	for (int i =0; i< n; i++)
	{
		if (a[i] < a[i+1])
			return 1;
		else
			return 0; 
	}
}
int main()
{
	int a[N], n, so;
	printf("Nhap so phan tu cua mang: "); scanf("%d", &n);
	printf("Nhap phan tu cho mang: ");
	for (int i = 0; i<n; i++)
		scanf("%d", &a[i]);
	printf("Nhap so can tim: "); scanf("%d", &so);
	int check = kiemtra(a, n);
	if (check == 1)
	{
		int kq1 = timtang(a,0,n-1, so);
		if (kq1 == -1)
			printf("Khong tim thay");
		else
			printf("So can tim xuat hien o vi tri thu %d", kq1);
			
	}
	else
	{
		int kq2 = timgiam(a,0,n-1, so);
		if (kq2 != -1)
			printf("So can tim xuat hien o vi tri thu %d", kq2);
		else
			printf("Khong tim thay");
	}
		
	return 0;
}
