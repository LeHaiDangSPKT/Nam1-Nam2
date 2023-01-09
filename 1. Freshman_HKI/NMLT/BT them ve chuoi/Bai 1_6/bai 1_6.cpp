#include<stdio.h>
#include<string.h>

void main()
{
	char S[100], tu[100];
	gets(S);
	gets(tu);
	int l = strlen(S);
	int dem = 0;
	for (int i = 0; i < l; i++)
	{
		char tam[100] = "";
		int h = 0;
		for (int j = i; j < l; j++)
		{
			if (S[j] != ' ')
			{
				tam[h] = S[j];
				h++;
				i++;
			}
			else
				break;
		}
		if (strcmp(tam, tu) == 0)
			dem++;
	}
	printf("%d", dem);
}



