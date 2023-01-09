#include <stdio.h>
#define N 100
int main()
{
	int a[N], n, i, j, max = 0;
	scanf("%d", &n);
	for (i=0; i<n; i++)
		scanf("%d", &a[i]);
	for (i=0; i<n-1; i++)
	{
		int check = 0, sum = 0;
		while(a[i]<a[i+1] && i<n-1)
		{
			if (check==0)
				sum=sum+a[i]+a[i+1];
			else
				sum=sum+a[i+1];
			check=1; i++;
		}
		if (sum > max)
			max = sum;
	}
	printf("Mang con tang dan co tong lon nhat: %d", max);
	return 0;
}
