#include<stdio.h>
#include <string.h>
void main()
{
	char S1[30], S2[30];
	gets(S1);
	gets(S2);
	if (strstr(S1, S2) != NULL || strstr(S2, S1) != NULL)
		printf("Co");
	else
		printf("Khong");
}1]