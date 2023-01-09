#include <stdio.h>
#include <string.h>
#include <cmath>
#define N 100
int main()
{
	int sum = 0;
	char Amstrong[N];
	gets(Amstrong);
	int l =strlen(Amstrong);
	for (int i =0; i<l; i++)
		sum+=pow(Amstrong[i]-'0', l);
	printf("%d", sum);
	return 0;
}
