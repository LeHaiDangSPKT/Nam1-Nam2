#include <stdio.h>

int tinh(int n)
{
	int sum = 0;
	if (n==0)
		return 0;
	if (n==1)
		return 1;
	else
	{
		if (n%2==0)
			return sum+=tinh(n/2);
		else
			return sum=sum+tinh(n-1)+tinh(n-2);
	}
}
	
int main()
{
	int n; 
	scanf("%d", &n);
	printf("%d", tinh(n));
	return 0;
}
