#include<stdio.h>
void nhap(int A[], int& n);
int check(int A[], int n);
int tinh(int A[], int n);
void xuat(int tinh);

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

int check(int A[], int n)
{
	int h = 0, t = 0;
	for (int i = 0; i < n; i++)
	{
		if (A[i] % 2 == 0)
			h++;
	}
	if (h)
		return 1;
	else
		return 0;
}

int tinh(int A[], int n)
{
	if (check(A, n))
	{
		int max;
		for (int i = 0; i < n; i++)
		{
			if (A[i] % 2 == 0)
				max = A[i];
			for (int j = i+1; j < n; j++)
			{
				if (A[j] % 2 == 0 && A[j] > max)
					max = A[j];
			}
			return max;
		}
	}
	else
		return -1;

}
void xuat(int tinh)
{
	printf("%d", tinh);
}
