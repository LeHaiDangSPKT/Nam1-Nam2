#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Int2Hex(unsigned int x, char *result);
void Hex2Bin(char x, char *s);
int GetBit(unsigned int x, int n);
unsigned int OnBit(unsigned int x, int n);
unsigned int OffBit(unsigned int x, int n);
int BitCount(unsigned int x);


int main()
{
	char s[42];
	unsigned int x = 500000;
	Int2Hex(x, s);
	printf("%s\n", s);
	printf("So luong bit 1 la: %d\n", BitCount(x));

	return 0;
}

int BitCount(unsigned int x)
{
	int dem = 0;
	for (int i = 0; i < 32; i++)
		if (GetBit(x, i) > 0)
			dem++;
	return dem;
}

unsigned int OffBit(unsigned int x, int n)
{
	unsigned int m = 1;
	m = m << n;
	m = ~m;
	x = x & m;
	return x;
}


unsigned int OnBit(unsigned int x, int n)
{
	unsigned int m = 1;
	m = m << n;
	x = x | m;
	return x;
}

int GetBit(unsigned int x, int n)
{
	unsigned int m = 1;
	m = m << n;
	if ((x & m) > 0)
		return 1;
	else
		return 0;
}

void Hex2Bin(char x, char *s)
{
	switch (x)
	{
	case '0':
		strcpy(s, "0000");
		break;
	case '1':
		strcpy(s, "0001");
		break;
	case '2':
		strcpy(s, "0010");
		break;
	case '3':
		strcpy(s, "0011");
		break;
	case '4':
		strcpy(s, "0100");
		break;
	case '5':
		strcpy(s, "0101");
		break;
	case '6':
		strcpy(s, "0110");
		break;
	case '7':
		strcpy(s, "0111");
		break;
	case '8':
		strcpy(s, "1000");
		break;
	case '9':
		strcpy(s, "1001");
		break;
	case 'A':
		strcpy(s, "1010");
		break;
	case 'B':
		strcpy(s, "1011");
		break;
	case 'C':
		strcpy(s, "1100");
		break;
	case 'D':
		strcpy(s, "1101");
		break;
	case 'E':
		strcpy(s, "1110");
		break;
	case 'F':
		strcpy(s, "1111");
		break;
	}
}


void Int2Hex(unsigned int x, char *result)
{
	char s[20];
	int i, sodu;
	strcpy(s, "");
	while (x > 0)
	{
		sodu = x % 16;
		switch (sodu)
		{
		case 0:
			strcat(s, "0");
			break;
		case 1:
			strcat(s, "1");
			break;
		case 2:
			strcat(s, "2");
			break;
		case 3:
			strcat(s, "3");
			break;
		case 4:
			strcat(s, "4");
			break;
		case 5:
			strcat(s, "5");
			break;
		case 6:
			strcat(s, "6");
			break;
		case 7:
			strcat(s, "7");
			break;
		case 8:
			strcat(s, "8");
			break;
		case 9:
			strcat(s, "9");
			break;
		case 10:
			strcat(s, "A");
			break;
		case 11:
			strcat(s, "B");
			break;
		case 12:
			strcat(s, "C");
			break;
		case 13:
			strcat(s, "D");
			break;
		case 14:
			strcat(s, "E");
			break;
		case 15:
			strcat(s, "F");
			break;
		}
		x = x / 16;
	}
	int L = (int)strlen(s);
	char c;
	for (i = 0; i < L / 2; i++)
	{
		c = s[i];
		s[i] = s[L - 1 - i];
		s[L - 1 - i] = c;
	}
	char temp[5];
	strcpy(result, "");
	for (i = 0; i < L-1; i++)
	{
		Hex2Bin(s[i], temp);
		strcat(result, temp);
		strcat(result, " ");
	}
	Hex2Bin(s[L-1], temp);
	strcat(result, temp);
}



