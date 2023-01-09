#include<stdio.h>
void nhap(int A[], int& n);
int tinh(int A[], int n);
void xuat(int tinh);
int laHH(int A[], int n);
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
int laHH(int A[], int n)
{
	int sum = 0;
	for (int i = 1; i < A[n]; i++)
	{
		if ((A[n] % i == 0) && A[n] > 0)
			sum += i;
	}
	if (sum == A[n])
		return 1;
	else
		return 0;
}
int check(int A[], int n)
{
	int d = 0;
	for (int i = 0; i < n; i++)
	{
		if (laHH(A, i))
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
		int min;
		for (int i = 0; i < n; i++)
		{
			if (laHH(A, i))
			{
				min = A[i];
				for (int j = 0; j < n; j++)
				{
					if (laHH(A, j)&& (A[j] < A[i]))
						min = A[j];
				}
				return min;
			}
		}
	}
	return -1;
}

void xuat(int tinh)
{
	printf("%d", tinh);
}
