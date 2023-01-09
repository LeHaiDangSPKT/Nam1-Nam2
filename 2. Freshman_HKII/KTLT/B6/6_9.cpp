#include <stdio.h>
#include <string.h>
#define N 100
int main()
{
	char s[N];
	gets(s);
	for (int i=0; i<strlen(s); i++)
	{
		for (int j=i+1; j<strlen(s); j++)
		{
			if (s[i]<=s[j])
			{
				char temp = s[i];
					s[i] = s[j];
					s[j] = temp;
			}
		}
	}
	for (int i=0; i<strlen(s); i++)
	{
		int dem = 1;
		printf("Ki tu %c xuat hien: ", s[i]);
		while (s[i]==s[i+1])
		{
			dem++;
			i++;
		}
		printf("%d lan\n", dem);
	}
	return 0;
}
