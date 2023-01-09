#include <stdio.h>
#include <string.h>
int main()
{
	char s[100];
	gets(s);
	int dem = 0, sum = 0;
	for (int i = 0; i < strlen(s); i++)
	{	
		int tong = 0;
		for (; i < strlen(s); i++)
		{
			if (s[i] >= '0' && s[i] <= '9')
				tong = tong*10 + s[i] -48;
			else
				break;
		}
		sum+=tong;
	}
	printf("Ket qua la: %d", sum);
	return 0;
}
