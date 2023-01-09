#include <stdio.h>
#define N 100
int tim(int a[N], int l, int r, int so)
{
	if (r>=l)
	{
		int mid = l+(r-l)/2;
		if (a[mid]==so)
			return mid;
		else if (a[mid] > so)
			return tim(a,l, mid-1, so);
		else if (a[mid]<so)
			return tim(a,mid+1,r,so);
		else
			return -1;
	}
}
void sapxeptang(int a[], int n)
{
	for (int i=0; i<n; i++)
		for (int j=i+1; j<n; j++)
			if (a[i]>a[j])
			{
				int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
			}
}
void saochep(int a[], int b[], int n)
{
	for (int i=0; i<n; i++)
		b[i]=a[i];
}
int main()
{
	int a[N], b[N], n, so;
	printf("Nhap so phan tu cua mang: "); scanf("%d", &n);
	printf("Nhap phan tu cho mang: ");
	for (int i = 0; i<n; i++)
		scanf("%d", &a[i]);
	saochep(a,b,n);
	sapxeptang(a,n);
	printf("Nhap so can tim: "); scanf("%d", &so);
	int kq = tim(a,0,n-1, so);
	if (kq == -1)
		printf("Khong tim thay");
	else
	{
		for (int i=0; i<n; i++)
			if (a[kq]== b[i])
			{
				printf("So can tim xuat hien o vi tri thu %d", i);
				break;
			}		
	}
		
	return 0;
}

