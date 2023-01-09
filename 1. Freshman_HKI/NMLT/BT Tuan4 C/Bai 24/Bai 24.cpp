#include <stdio.h>
#define MAX 100
void nhap(int A[], int& n);
int tinh(int A[], int a, int B[], int b);
void xuat(int tinh);
void main()
{
	int A[MAX], a, B[MAX], b;
	nhap(A, a);
	nhap(B, b);
	int kq = tinh(A, a, B, b);
	xuat(kq);
}

void nhap(int X[], int& x)
{
	scanf("%d", &x); 
	for (int i = 0; i < x; i++)
	{
		scanf("%d", &X[i]);
	}
}
int tinh(int A[], int a, int B[], int b)
{
	int dem = 0;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (A[i] == B[j])
			{
				dem++;
				break;
			}
		}
	}
	if (dem == a)
		return 0;
	else
		return 1;
}

void xuat(int tinh)
{
	printf("%d", tinh);
}
