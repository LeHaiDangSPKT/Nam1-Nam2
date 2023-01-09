#include<stdio.h>
#include<string.h>
void main()
{
	char S[100], KQ[100];
	gets(S);
	KQ[0] = '\0';
	int i = strlen(S) - 1;
	while (i >= 0)
	{
		while (i >= 0 && S[i] == 32)
		{
			strcat(KQ, " ");
			i--;
		}
		char Tam[100] = "";
		int nTam = 0;
		while (i >= 0 && S[i] != 32)
		{
			Tam[nTam++] = S[i];
			i--;
		}
		strrev(Tam);
		strcat(KQ, Tam);
	}
	printf("%s", KQ);
}
