#include<stdio.h>
#include <string.h>
void main()
{
	char S[30];
	gets(S);
	int sum = 0;
	int l = strlen(S);
	for (int i = 0; i < l; i++)
	{	
		int tong = 0;
		for (; i < l; i++)
		{
			if (S[i] >= '0' && S[i] <= '9')
				tong = tong*10 + S[i] -48;
			else
				break;
		}
		sum+=tong;
	}
	printf("%d", sum);
}