#include <stdio.h>

int main()
{
	int n;
	double gthua = 1;
	scanf("%d", &n);
	for (int i=1; i<=n; i++)
		gthua*=i;
	printf("Gia tri cua %d! la: %0.lf", n, gthua);
	return 0;
}
