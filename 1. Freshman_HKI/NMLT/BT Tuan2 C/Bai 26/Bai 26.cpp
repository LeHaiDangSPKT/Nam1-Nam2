#include <stdio.h>

void nhap(int  &n);
int tinh(int n);

void main()
{
	int n;
	nhap(n);
	int kq=tinh(n);
}

void nhap(int &n)
{
	scanf("%d", &n);
}

int tinh(int n)
{	
	int a = 1, b = 1;
	if (n == 1)
		printf("1 so dau tien trong day fibonacci la: 1");
	else if (n==2)
		printf("2 so dau tien trong day fibonacci la: 1 1");
	else
		printf("%d so dau tien trong day fibonacci la: 1 1 ", n);
		for (int i=3; i<=n; i++)
		{
			int sum=0;
			sum = a + b;
			a = b;
			b = sum;
			printf("%d ", sum);
		}
	return 0;
}

