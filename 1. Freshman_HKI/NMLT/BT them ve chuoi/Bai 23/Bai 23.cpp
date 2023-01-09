#include<stdio.h>
#include<string.h>
void xoaKT(char S[], int& l, int n);
void main()
{
	char S1[100], S2[100] = "";
	gets(S1);
	int l = strlen(S1);
	int h = 0;
	for (int i = 0; i < l; i++)
	{
		if (S1[i] >= '0' && S1[i] <= '9')
		{
			S2[h] = S1[i];
			h++;
			xoaKT(S1, l, i);
		}
	}
	puts(S1);
	for (i = 0; i < h; i++)
	{
		printf("%c", S2[i]);
	}
}

void xoaKT(char S[], int& l, int n)
{
	for (int i = n; i < l; i++)
	{
		S[i] = S[i + 1];
	}
	l--;
}


