#include <stdio.h>
#define MAX 100
void nhap(int X[], int& x);
void ghepMang(int A[], int a, int B[], int b, int C[]);
void SapXep(int C[], int c);
void xuat(int C[], int c);
void main()
{
	int A[MAX], B[MAX], C[MAX], a, b;
	nhap(A, a);
	nhap(B, b);
	ghepMang(A, a, B, b, C);
	int c = a + b;
	SapXep(C, c);
	xuat(C, c);
}

void nhap(int X[], int &x)
{
	scanf("%d", &x);
	for (int i = 0; i < x; i++)
	{
		scanf("%d", &X[i]);
	}
}

void ghepMang(int A[], int a, int B[], int b, int C[])
{
	for (int j = 0; j < a; j++)
	{
		C[j] = A[j];
	}
	int h = 0;
	for (int k = a; k < a + b; k++)
	{
		C[k] = B[h];
		h++;
	}
}

void SapXep(int C[], int c)
{
	for (int i = 0; i < c - 1; i++)
	{
		for (int j = i + 1; j < c ; j++)
		{
			if (C[i] > C[j])
			{
				int t = C[i];
				C[i] = C[j];
				C[j] = t;
			}
		}
	}
}

void xuat(int C[], int c)
{
	for (int i = 0; i < c; i++)
	{
		printf("%d ", C[i]);
	}
}

