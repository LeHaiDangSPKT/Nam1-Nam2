#include<stdio.h>
#include<string.h>

void main()
{
	char S[100], tam1[100] = "";
	gets(S);
	int l = strlen(S);
	
	//Tach tu cuoi cung
	int g = 0;
	for (int i = l - 1; i >= 0; i--)
	{
		if (S[i] != ' ')
		{
			tam1[g] = S[i];
			g++;
		}
		else
			break;
	}
	strrev(tam1);
	int l_tam1 = strlen(tam1);
	//Xuat mang da doi
	for (i = 0; i < l - l_tam1; i++)
	{
		printf("%c", S[i]);
	}
	
	printf("\n");

	for(i = 0; i < l_tam1; i++)
	{
		printf("%c", tam1[i]);
	}
	
}


