#include<stdio.h>
#include<string.h>

void main()
{
	char S[100], tam1[100] = "", tam2[100] = "";
	gets(S);
	int l = strlen(S); 
	// tach tu dau tien
	int h = 0;
	for (int i = 0; i < l; i++)
	{
		if (S[i] != ' ')
		{
			tam1[h] = S[i];
			h++;
		}
		else
			break;
	}
	int l_tam1 = strlen(tam1);

	//Tach tu cuoi cung
	int g = 0;
	for (i = l - 1; i >= 0; i--)
	{
		if (S[i] != ' ')
		{
			tam2[g] = S[i];
			g++;
		}
		else
			break;
	}
	strrev(tam2);
	int l_tam2 = strlen(tam2);

	//Xuat mang da doi
	for (i = 0; i < l_tam2; i++)
	{
		printf("%c", tam2[i]);
	}

	for (i = l_tam1; i < l - l_tam2; i++)
	{
		printf("%c", S[i]);
	}

	for (i = 0; i < l_tam1; i++)
	{
		printf("%c", tam1[i]);
	}	
}


