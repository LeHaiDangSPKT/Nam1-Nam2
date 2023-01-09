#include <stdio.h>
#include <cmath>
#define N 100

int main()
{
	int n,x, a[N];
	printf("Nhap n: "); scanf("%d", &n);
	printf("Nhap x: "); scanf("%d", &x);
	printf("Nhap mang: ");
	for (int i=0; i<n; i++)
		scanf("%d", &a[i]);
	int sum = 0;
	for (int i=0; i<n; i++)
		sum+=a[i]*pow(x,i);
	printf("Ket qua: %d", sum); 
	return 0;
}
