#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


void Int2Bin(unsigned int x, int n, char *s);
void LietKeBin(int n);

int main()
{
	int n; 
	scanf("%d", &n);
	LietKeBin(n);
	return 0;
}

void Int2Bin(unsigned int x, int n, char *s)
{
	unsigned int m = 1;
	strcpy(s, "");
	for (int i = 0; i < n; i++)
	{
		if ((x & m) > 0)
			strcat(s, "1");
		else
			strcat(s, "0");
		m = m << 1;
	}
	int L = (int)strlen(s);
	char c;
	for (int i = 0; i < L / 2; i++)
	{
		c = s[i];
		s[i] = s[L - 1 - i];
		s[L - i - 1] = c;
	}
}

void LietKeBin(int n)
{
	int m = (int)pow(2, n);
	char s[40];
	for (int i = 0; i < m; i++)
	{
		Int2Bin(i, n, s);
		printf("%s\n", s);
	}
	return;
}


