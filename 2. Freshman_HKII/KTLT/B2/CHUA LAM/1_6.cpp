#include <stdio.h>
#define N 100
int main()
{
	int a[N], b[N], n;
	printf("Nhap n: "); scanf("%d", &n);
	printf("Nhap mang A: ");
	for (int i=0; i<n; i++)
		scanf("%d", &a[i]);
	printf("Nhap mang B: ");
	for (int i=0; i<n; i++)
		scanf("%d", &b[i]);
	printf("Mang C: ");
	int counta = 0, countb = 0;
	for (int i=0; i<2*n; i++)
		if (i%2==0)
			printf("%d ", a[counta++]);
		else
			printf("%d ", b[countb++]);
	return 0;
}
