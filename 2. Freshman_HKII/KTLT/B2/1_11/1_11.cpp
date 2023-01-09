#include <stdio.h>
#include <string.h>
#define N 1000
void them(char a[N], int &n, char so)
{
	for (int i=n; i>0; i--)
		a[i] = a[i-1];
	a[0] = so;
	n++;
}
void tinh(char a[N], char b[N])
{
	char c[N];
	int nho = 0, dem = 0;
	if (strlen(a)<strlen(b))
	{
		while (strlen(a)<strlen(b))
		{
			int la = strlen(a);
			them(a, la, '0');
		}
	}
	else
	{
		while (strlen(a)>strlen(b))
		{
			int lb = strlen(b);
			them(b, lb, '0');
		}
	}	
	int la = strlen(a);
	for (int i = la-1; i>=0; i--)
	{
		int so = int(a[i]-'0') + int(b[i]-'0') + nho;
		c[dem++] = char(so%10 +'0');
		nho = so/10;
	}
	if (nho==1)
		printf("1");
	for (int i =dem-1; i>=0; i--)
	{
		printf("%c", c[i]);
	}

	
}
int main()
{
	char a[N], b[N];
	gets(a);
	gets(b);
	tinh(a,b);
	return 0;
}
