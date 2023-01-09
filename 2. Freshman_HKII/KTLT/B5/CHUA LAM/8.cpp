#include <stdio.h>
#include <string.h>
#define N 100
int main()
{
	char s[N];
	gets(s);
	int l = strlen(s);
	int check = 0;
	for (int i=0; i<l/2; i++)
		if (s[i]!=s[l-i-1])
				check++;
	if (check==0)
		printf("Doi xung");
	else
		printf("Khong doi xung");
	return 0;
}
