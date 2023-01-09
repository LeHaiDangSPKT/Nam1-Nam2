#include <stdio.h>
#define MAX 100
void nhap(double X[], int& x);
void a(double A[], double B[], int m);
void b(double A[], double B[], int m);
void main()
{
	double A[MAX], B[MAX];
	int m;
	scanf("%d", &m);
	nhap(A, m);
	nhap(B, m);
	a(A, B, m);
	b(A, B, m);
}

void nhap(double X[], int& x)
{
	for (int i = 0; i < x; i++)
	{
		scanf("%lf", &X[i]);
	}
}

void a(double A[], double B[], int m)
{
	for (int i = 0; i < m; i++)
	{
		int dem1 = 0;
		for (int j = 0; j < m; j++)
		{
			if (A[i] == B[j])
				dem1++;
		}
		if (dem1 == 0)
		{
			printf("%.2lf  ", A[i]);
		}
	}
}

void b(double A[], double B[], int m)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (A[i] == B[j])
			{
				printf("%.2lf  ", A[i]);
				break;
			}
		}
	}
}