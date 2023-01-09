#include <stdio.h>
 
void nhap(int &n);
int tinh(int n);

void main()
{
	int n;
	nhap(n);
	int kq=tinh(n);
}

void nhap(int &n)
{
	scanf("%d", &n);
}

int tinh(int n)
{
    for(int i = 2; i <= n; i++)
	{
       int dem = 0;
       while (n % i == 0)
	   {
            dem++;
            n/=i;
       }
	   if(dem!=0)
       {	
			if(dem > 1) 
				printf("%d^%d", i, dem);
			else
				printf("%d", i);
			if(n>i)
				printf("*");
		}
    }
	return 0;
}


