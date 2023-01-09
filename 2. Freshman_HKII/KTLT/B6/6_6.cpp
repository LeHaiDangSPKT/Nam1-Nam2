#include <stdio.h>
#define N 100
int main()
{
	int a[N], n, i, j;
	scanf("%d", &n);
	for (i=0; i<n; i++)
		scanf("%d", &a[i]);
	for (i=0; i<n-1; i++)
	{
		int check = 0;
		while(a[i]<a[i+1] && i<n-1)
		{
			if (check==0)
				printf("%d %d ", a[i], a[i+1]);
			else
				printf("%d ", a[i+1]);
			check=1; i++;
		}
		if (check!=0)
			printf("\n");
	}
	return 0;
}
