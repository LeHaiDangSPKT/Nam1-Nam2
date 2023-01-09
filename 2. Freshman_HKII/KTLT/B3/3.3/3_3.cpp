#include <stdio.h>

int main()
{
	double sum=0, tam = 0;
	int  n;
	scanf("%d", &n);
	for (int i=1; i<=n; i++)
	{
		tam+=i;
		sum+=tam;
	}
	printf("%.0f", sum);
	return 0;
}

