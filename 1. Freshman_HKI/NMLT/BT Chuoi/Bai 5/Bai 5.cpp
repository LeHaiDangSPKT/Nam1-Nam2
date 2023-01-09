#include <stdio.h>
#include <string.h>
void xoa(char S[], int vitrixoa);
void main()
{
	char S[30];
	gets(S);
	int l = strlen(S);
	for (int i = 0; i < l; i++)
		if (S[i] == ' ')
			xoa(S, i);
	puts(S);
}

void xoa(char S[], int vitrixoa)
{
	int l = strlen(S);
	for (int i = vitrixoa; i <l; i++)
		S[i] = S[i + 1];
}