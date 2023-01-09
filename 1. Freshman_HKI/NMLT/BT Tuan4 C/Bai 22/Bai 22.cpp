#include <stdio.h>
#define MAX 100
void nhap(int A[], int& n);
void tinh(int A[], int n);
void main()
{
	int A[MAX], n;
	nhap(A, n);
	tinh(A, n);
}

void nhap(int A[], int& n)
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}
}

void tinh(int A[], int n)
{
	int dem = 0;
	for (int i = 0; i< n-2; i++)
	{
		if (((A[i] + A[i + 2]) / 2) != A[i + 1])
			dem++;
	}
	if(dem == 0)
		printf("%d", A[1] - A[0]);
}

