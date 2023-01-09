#include <stdio.h>
#define N 100
void nhapmang(int a[], int n)
{
	for (int i=0; i<n; i++)
		scanf("%d", &a[i]);
}
void xuatmang(int a[], int n)
{
	for (int i=0; i<n; i++)
		printf("%d ", a[i]);
	printf("\n");
}
void sapxep(int a[], int n)
{
	for (int i=0; i<n; i++)
	{
		for (int j =i+1; j<n; j++)
		{
			if (a[i]<a[j])
			{
				int temp = a[i];
					a[i]=a[j];
					a[j]=temp;
			}
		}
	}
}
void them(int a[], int &n, int vitri, int chen)
{
	for(int i = n; i > vitri; i--)
	{
        a[i] = a[i-1];
    }
    a[vitri+1] = chen;
	n++;
}
void chen(int a[], int &n, int so)
{
	for (int i=0; i<n; i++)
	{
		if (a[i]>=so && a[i+1]<=so)
		{
			them(a, n, i, so);
			break;	
		}
	}
}
int main()
{
	int a[N], n, so;
	printf("Nhap n: "); scanf("%d", &n);
	nhapmang(a, n);
	sapxep(a, n);
	xuatmang(a,n);
	printf("Nhap so muon chen: "); scanf("%d", &so);
	chen(a,n,so);
	xuatmang(a,n);
	return 0;
}
