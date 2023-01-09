#include <stdio.h>
#include <cmath>

int main()
{
	int check=2, n;
	scanf("%d", &n);
	//Tao mang tu 2 den n-1 
	int a[n];
	for (int i=2; i<n; i++)
		a[check++]=i;
	for (int i=2; i<=sqrt(n); i++)
	{
		if (a[i]!=0)
		{
			for (int j=i*i; j<n; j+=i)
				a[j]=0;
		}
	}
	for (int i=2; i<n; i++)
		if (a[i]!=0)
			printf("%d\n", a[i]);
	return 0;
}
