#include <stdio.h>

void nhapmang(int A[], int &n)
{
	scanf("%d",&n);
	for (int i = 0; i<n; i++)
		scanf("%d", &A[i]);
}
int duyetmang(int A[], int n)
{
	int min = A[0];
	for (int i=0; i<n; i++)
		if (A[i]<min)
			min = A[i];
	return min;
}
int main()
{
	int A[100];
	int n;
	nhapmang(A,n);	
	int kq=duyetmang(A,n);
	printf("Phan tu nho nhat la: %d", kq);
	return 0;
}
