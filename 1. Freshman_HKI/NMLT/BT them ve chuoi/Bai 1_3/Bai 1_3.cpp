#include<stdio.h>
#include<string.h>
void main()
{
	char S[100], tam[100] = "";
	gets(S);
	int l = strlen(S);
	for (int i = 0; i < l; i++)
	{
		if (S[i] != ' ')
		{
			printf("%c", S[i]);
		}
		else
		{
			printf(" ");
			break;
		}
	}

	int g = 0;
	for (int j = l - 1; j >= 0; j--)
	{
		if (S[j] != ' ')
		{
			tam[g] = S[j];
			g++;
		}
		else
			break;
	}
	for (i = g - 1; i >= 0; i--)
		{
			printf("%c",tam[i]);
		}
}

