#include <stdio.h>
int main()
{
	double a, sum;
	printf("Nhap so thuc A (0<A<4): "); scanf("%lf", &a);
	int i=0;
	do
	{
		i++;
		sum+=(double)1/i;
	}
	while(sum<=a);
	printf("%d", i);
	return 0;
}
