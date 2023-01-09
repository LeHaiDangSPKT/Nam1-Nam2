#include <stdio.h>
#include <string.h>
void main()
{
	char S[30];
	gets(S);
	int l = strlen(S);
	int dem = 1;
	for (int i = 0; i < l; i++)
       if (S[i] == ' ' && S[i + 1] != ' ')
       {
           dem++;
       }
	printf("%d", dem);
}