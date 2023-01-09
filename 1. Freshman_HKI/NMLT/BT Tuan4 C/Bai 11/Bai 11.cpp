#include <stdio.h>
#define MAX 100
void nhap(int A[], int& n);
int laChan(int n);
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

int laChan(int n)
{
	int sum = 0;;
	for (int i = n; i > 0 ; i/=10)
	{
		int g = i % 10;
		sum = sum * 10 + g;
	}
	if (sum % 2 == 0)
		return 1;
	else
		return 0;
}
void tinh(int A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (laChan(A[i]) == 1)
			printf("%d  ", A[i]);
	}
}