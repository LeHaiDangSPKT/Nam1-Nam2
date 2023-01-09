#include <stdio.h>
#define MAX 100
void nhap(int A[], int& n);
void LK(int A[], int a, int B[], int b);
void xuat(int tinh);
void main()
{
	int A[MAX], B[MAX], a, b;
	nhap(A, a);
	nhap(B, b);
	LK(A, a, B, b);
	LK(B, b, A, a);
}

void nhap(int A[], int& n)
{
	scanf("%d", &n); 
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}
}
void LK(int A[], int a, int B[], int b)
{
	int sum = 0;
	for (int i = 0; i < a; i++)
	{
		int dem = 0;
		for (int j = 0; j < b; j++)
		{
			if (A[i] == B[j])
				break;
			else
				dem++;
		}
		if (dem == b)
			printf("%d  ", A[i]);
	}
}


