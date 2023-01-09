#include <stdio.h>

double tinh(int x, int p)
{
	double kq = 1;
	if (p==0)
		return 1;
	else 
		return kq *= (double)x*tinh(x, p-1);
}
int main()
{
	int x,p;
	scanf("%d%d", &x,&p);
	double kq = tinh(x,p);
	printf("%.0lf", kq);
}
