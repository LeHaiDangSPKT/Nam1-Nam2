#include<stdio.h>
#include<string.h>

void main()
{
	char S[100];
	gets(S);
	int l = strlen(S);
	for (int i = 0; i < l; i++)
	{
		if (i % 2 == 0)
			if (S[i] >= 'a' && S[i] <= 'z')
				S[i] -=32;
		else
			if (S[i] >= 'A' && S[i] <= 'Z')
				S[i] += 32;
	}
	for (i = 0; i < l; i++)
	{
		printf("%c", S[i]);
	}
}


