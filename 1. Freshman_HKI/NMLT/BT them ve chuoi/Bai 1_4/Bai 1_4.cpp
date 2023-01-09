#include<stdio.h>
#include<string.h>
void main()
{
	char S[100];
	gets(S);
	int l = strlen(S);
	int dem = 0;
	for (int i = 0; i < l; i++)
	{
		if (S[i] == ' ')
			dem++;
	}

	int dem1 = 0;
	for (i = 0; i < l; i++)
	{
		if (S[i] != ' ')
			printf("%c", S[i]);
		else
		{
			dem1++;
			if (dem1 == 1 || dem1 == dem)
				printf("\n");
			else
				printf(" ");
		}
	}
}

