#include <stdio.h>
int main()
{
	int n, x;
	scanf("%d", &n);
	scanf("%d", &x);
	int tamtu = 1, tammau = 1;
	double sum = 0;
	for (int i = 1; i<=n; i++)
	{
		tamtu*=x;
		tammau*=i;
		sum+= (double)tamtu/tammau;
	}
	printf("%lf", sum+1);
	return 0;
}
