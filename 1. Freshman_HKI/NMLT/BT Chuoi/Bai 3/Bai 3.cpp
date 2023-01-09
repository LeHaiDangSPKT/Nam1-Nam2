#include <stdio.h>
#include <string.h>
void main()
{
	char S[30];
	gets(S);
	int l = strlen(S);
	for (int i = l - 1; i >= 0; i--)
		printf("%c", S[i]);
}