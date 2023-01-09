#include <stdio.h>

double giaithua(int n)
{
    double gt=1;
    for (int i=1; i<=n; i++)
        gt=gt*i;
    return gt;
}
 
double ckn(int k, int n)
{
    return (giaithua(n)/(giaithua(k)*giaithua(n-k)));
}

int main()
{
    int n, k;
    printf("Nhap lan luot k, n : ");
    scanf("%d%d",&k,&n);
    double kq = ckn(k, n);
    printf("Ckn = %.0lf",kq);
    return 0;
}
