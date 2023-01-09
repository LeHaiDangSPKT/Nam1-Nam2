#include<stdio.h>
#include<string.h>

void main()
{
	char S[100];
	gets(S);
	int l = strlen(S);
	for (int i = 0; i < l; i++)
	{
		if (S[i] >= 'A' && S[i] <= 'Z')
			S[i] += 32;
	}
	for (i = 0; i < l; i++)
	{
		printf("%c", S[i]);
	}
}


