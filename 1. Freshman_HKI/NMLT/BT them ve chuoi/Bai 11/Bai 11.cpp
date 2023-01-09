#include<stdio.h>
#include<string.h>

void main()
{
	char S[100], c;
	gets(S);
	scanf("%c", &c);
	int l = strlen(S);
	int cach = 0;
	for (int i = 0; i < l; i++)
	{
		char tam[100] = "";
		int h = 0;
		for (int j = i; j <= l; j++)
		{
			if (S[j] != ' ' && j < l)
			{
				tam[h] = S[j];
				h++;
				i++;
			}
			else 
			{
				cach++;
				break;
			}
		}
		if (strchr(tam, c) != NULL)
			printf("%d ", cach);
	}
}


