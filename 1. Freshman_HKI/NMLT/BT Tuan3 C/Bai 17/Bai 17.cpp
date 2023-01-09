#include<stdio.h>
void nhap(double A[], int& n);
int check(int A[], int n);
double tinh(double A[], int n);
void xuat(double tinh);
void main()
{
	int n;
	double A[100];
	nhap(A, n);
	double kq = tinh(A, n);
	xuat(kq);
}
void nhap(double A[], int& n)
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &A[i]);
	}
}
int check(double A[], int n)
{
	int h = 0;
	for (int i = 0; i < n; i++)
	{
		if (A[i] < 0)
			h++;
	}
	if (h)
		return 1;
	else
		return 0;
}

double tinh(double A[], int n)
{
	if (check(A, n))
	{
		double max;
		for (int i = 0; i < n; i++)
		{
			if (A[i] < 0)
			{
				max = A[i];
				for (int j = 1; j < n; j++)
				{
					if (A[j] < 0)
					{
						if (A[j] > max)
							max = A[j];
					}
				}
				return max;
			}
		}	
	}
	return 0;
}
void xuat(double tinh)
{
	printf("%lf", tinh);
}
