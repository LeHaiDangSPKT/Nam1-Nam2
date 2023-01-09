#include <stdio.h>
#define MAX 100
void nhap(int A[], int& n);
int tinh(int A[], int a, int B[], int b);
void xuat(int tinh);
void main()
{
	int A[MAX], B[MAX], a, b;
	nhap(A, a);
	nhap(B, b);
	int kq = tinh(A, a, B, b);
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
int demSL(int A[], int a, int B[], int b)
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
			sum++;
	}
	return sum;
}

int tinh(int A[], int a, int B[], int b)
{
	int S1 = demSL(A, a, B, b);
	int S2 = demSL(B, b, A, a);
	return S1 + S2;
}

void xuat(int tinh)
{
	printf("%d", tinh);
}