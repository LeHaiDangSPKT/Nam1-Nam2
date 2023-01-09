#include <stdio.h>

void nhap(int &a, int &b, int &c);
int maxSC(int a, int b, int c);
void xuat (int maxSC);


void main()
{
	int a,b,c;
	nhap(a,b,c);
	int kq=maxSC(a,b,c);
	xuat(kq);
	scanf("%d");
}

void nhap(int &a, int &b, int &c)
{
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("Nhap b = ");
	scanf("%d", &b);
	printf("Nhap c = ");
	scanf("%d", &c);
}
int maxSC(int a, int b, int c)
{
    int max(int j, int k);
	int min(int j, int k);
	int t;
	t=(a+b+c)-max(max(a,b),c)-min(min(a,b),c);
	return t;
}
	
	    int max(int j, int k)
	        {
		        if (j>k) return j;
				else return k; 
			}
		int min(int j, int k)
			{
				if (j<k) return j;
				else return k;
			}
void xuat (int maxSC)
{
	printf("so nho nhi la: %d", maxSC);
}
