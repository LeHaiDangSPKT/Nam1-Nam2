#include<stdio.h>
void nhap(int A[], int& n);
int tinh(int A[], int n);
void xuat(int tinh);
int laNT(int A[], int n);
void main()
{
	int n, A[100];
	nhap(A, n);
	int kq = tinh(A, n);
	xuat(kq);
}
void nhap(int A[], int& n)
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}
}
int laNT(int A[], int n)
{
	int d = 0;
	for (int i = 1; i <= A[n]; i++)
	{
		if (A[n] % i == 0)
			d++;
	}
	if (d == 2)
		return 1;
	return 0;
}
int check(int A[], int n)
{
	int d = 0;
	for (int i = 0; i < n; i++)
	{
		if (laNT(A, i))
			d++;
	}
	if (d)
		return 1;
	return 0;

}
int tinh(int A[], int n)
{
	if (check(A, n))
	{
		int max;
		for (int i = 0; i < n; i++)
		{
			if (laNT(A, i))
				max = A[i];
			for (int j = i + 1; j < n; j++)
			{
				if (laNT(A, j))
				{
					if (A[j] > max)
						max = A[j];
				}
			}
			return max;
		}
	}
	return -1;
}

void xuat(int tinh)
{
	printf("%d", tinh);
}
