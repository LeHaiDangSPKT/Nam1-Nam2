#include <stdio.h>
#define MAX 100
void nhap(int A[], int& a);
void SapXep(int A[], int a, int B[], int& b, int C[], int& c);
void xuat(int B[], int b, int C[], int c);
void main()
{
	int A[MAX], B[MAX], C[MAX], a, b, c;
	nhap(A, a);
	SapXep(A, a, B, b, C, c);
	xuat(B, b, C, c);
}

void nhap(int A[], int& a)
{
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &A[i]);
	}
}

void SapXep(int A[], int a, int B[], int& b, int C[], int& c)
{
	b = 0; c = 0;
	for (int i = 0; i < a; i++)
	{
		if (A[i] < 0)
		{
			C[c] = A[i];
			c++;
		}
		else
		{
			B[b] = A[i];
			b++;
		}
	}
}

void xuat(int B[], int b, int C[], int c)
{
	for (int i = 0; i < b; i++)
	{
		printf("%d ", B[i]);
	}
	for (int j = 0; j < c; j++)
	{
		printf("%d ", C[j]);
	}
}