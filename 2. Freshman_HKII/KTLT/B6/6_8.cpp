#include <stdio.h>
int pascal(int i, int j)
{
	if (j==0 || j==i)
		return 1;
	else
		return pascal(i-1,j-1) + pascal(i-1, j);
}
int main()
{
	int n;
	printf("Nhap so hang cua tam giac Pascal: "); scanf("%d", &n);
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<=i; j++)
		{
			printf("%d ", pascal(i,j));
		}
		printf("\n");
	}	
	return 0;
}
