#include <stdio.h>

void nhapmang(int A[], int &n)
{
	scanf("%d",&n);
	for (int i = 0; i<n; i++)
		scanf("%d", &A[i]);
}
int duyetmang(int A[], int n)
{
	int sum=0;
	for (int i=0; i<n; i++)
		sum+=A[i];
	return sum;
}
int main()
{
	int A[100];
	int n;
	nhapmang(A,n);	
	int kq=duyetmang(A,n);
	printf("Tong: %d", kq);
	return 0;
}
