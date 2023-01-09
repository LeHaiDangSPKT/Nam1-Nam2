#include<stdio.h>
#include <string.h>
void main()
{
	char S[30];
	gets(S);
	int l = strlen(S);
	if (S[0] >= 'a' && S[0] <= 'z')
		S[0] -=32;
	for (int i = 1; i < l; i++)
	{
		if (S[i] == ' ')
			S[i + 1] -= 32; 
	}
	puts(S);
}