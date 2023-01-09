#include <stdio.h>
#include <string.h>
#define N 100 
int main()
{
	char s[N];
	gets(s);
	for (int i=0; i<strlen(s); i++)
	{
		char temp[N]="", dem=0;
		while(s[i]!=' ')
		{
			temp[dem++]=s[i];
			i++;
		}
		strrev(temp);
		for (int i=0; i<strlen(temp); i++)
			printf("%c", temp[i]);
		printf(" ");
	}
	return 0;
}
