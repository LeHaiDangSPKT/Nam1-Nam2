#include <stdio.h>

double tinh(int n)
{
	if (n==0) return 0;
	else if (n==1) return 1;
	else
		return n = tinh(n-2) + tinh(n-1);
}
int main()
{
	int n; 
	scanf("%d", &n);
	double kq=tinh(n);
	printf("Gia tri phan tu thu %d: %0.lf", n, kq);
	return 0;
}
