#include <stdio.h>
#include <string.h>
void xoa(char S[], int vitrixoa);
int main()
{
	char S[30];
	gets(S);
	int l = strlen(S);
	S[0]-=32;
	for (int i = 1; i < l; i++)
		if (S[i] == ' ')
		{
			xoa(S, i);
			S[i]-=32;
		}
	puts(S);
	return 0;
}

void xoa(char S[], int vitrixoa)
{
	int l = strlen(S);
	for (int i = vitrixoa; i <l; i++)
		S[i] = S[i + 1];
}
