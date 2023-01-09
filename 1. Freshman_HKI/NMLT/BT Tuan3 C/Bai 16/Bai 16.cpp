#include<stdio.h>
void nhap(int A[], int& n);
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


int tinh(int A[], int n)
{
	int max;
	for (int i = 0; i < n; i++)
	{
		if (A[i] < 0)
		{
			max = A[i];
			for (int j = i+1; j < n; j++)
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
void xuat(int tinh)
{
	printf("%d", tinh);
}
