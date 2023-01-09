#include <stdio.h>
#include <cmath>
long long Dec2Bin(int decimalNumber) 
{
    long long binaryNumber = 0;
    int p = 0;
    while (decimalNumber > 0)
    {
        binaryNumber += (decimalNumber % 2) * pow(10, p);
        ++p;
        decimalNumber /= 2;
    }
    return binaryNumber;
}
int main()
{
	int a;
	scanf("%d", &a);
    printf("Nhi phan: %d\n", Dec2Bin(a));
	printf("Bat phan: %o\n", a);
	printf("Thap luc phan: %X", a);
	return 0;
}
