#include <stdio.h>
#include <cmath>

int main()
{
	int n;
	double sum = 1;
	printf("Nhap n: "); scanf("%d", &n);
	for (int i=1; i<=n; i++)
		sum*=(double)(1+1/pow(i,2));
	printf("%lf", sum);
	return 0;
}
