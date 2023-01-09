#include <stdio.h>
#include <math.h>
 
long long Dec2Bin(int Dec)
{
    long long Bin = 0;
    int p = 0;
    while (Dec > 0)
    {
        Bin += (Dec % 2) * pow(10, p);
        p++;
        Dec /= 2;
    }
    return Bin;
}
 
int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    	printf("%d\n", Dec2Bin(i));
    return 0;
}
