#include<stdio.h>
#include<string.h>
void XoaPhanTu(char S[], int& l, int vitri);
void main()
{
	char S[100];
	gets(S);
	int l = strlen(S);
	for (int i = 0; i < l; i++)
	{
		if (S[i] == ' ')
		{
			XoaPhanTu(S, l, i);
			i--;
		}
	}
	for (i = 0; i < l; i++)
	{
		printf("%c", S[i]);
	}
}

void XoaPhanTu(char S[], int& l, int vitri)
{
	for (int i = vitri; i < l; i++)
	{
		S[i] = S[i + 1];
	}
	l--;
}


