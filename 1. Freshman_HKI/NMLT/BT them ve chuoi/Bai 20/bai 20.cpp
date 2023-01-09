#include<stdio.h>
#include<string.h>

void main()
{
	char S1[100], S2[100];
	gets(S1);
	gets(S2);
	for(int i = strlen(S1) - strlen(strstr(S1, S2)); i < strlen(S1); i++)
		printf("%c", S1[i]);
}


