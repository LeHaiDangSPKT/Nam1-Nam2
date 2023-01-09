#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int GetBit(int x, int n);
int BitCount(int x);

void LietKeTapCon(int a[], int n);
void LietKeTapConDoDai(int a[], int n, int m);

int main()
{
	int a[] = { 2, 3, 7 };
	LietKeTapConDoDai(a, 3, 2);
	return 0;
}

void LietKeTapConDoDai(int a[], int n, int m)
{
	int end = (int)pow(2, n);
	int x, i;
	for (x = 1; x < end; x++)
	{
		if (BitCount(x) == m)
		{
			for (i = 0; i < n; i++)
				if (GetBit(x, i) > 0)
					printf("%d ", a[i]);
			printf("\n");
		}
	}
	return;
}


void LietKeTapCon(int a[], int n)
{
	int end = (int)pow(2, n);
	int x, i;
	for (x = 1; x < end; x++)
	{
		for (i = 0; i < n; i++)
			if (GetBit(x, i) > 0)
				printf("%d ", a[i]);
		printf("\n");
	}
	return;
}

int GetBit(int x, int n)
{
	int m = 1;
	m = m << n;
	if ((x & m) > 0)
		return 1;
	else
		return 0;
}


int BitCount(int x)
{
	int dem = 0;
	for (int i = 0; i < 32; i++)
		if (GetBit(x, i) > 0)
			dem++;
	return dem;
}
