#include<stdio.h>
void nhap(int& n);
int Fi(int n);

void main()
{
	int n;
	nhap(n);
	Fi(n);
}

void nhap(int& n)
{
	scanf("%d", &n);
}
int Fi(int n) 
{
    int fi_0 = 0, fi_1 = 1, fi_n = 1, i;
    if (n < 0) 
        printf("0");
    else if (n == 0 || n == 1) 
        printf("%d", n);
    else 
    {
		printf("0 1 1 ");
        for (i = 2; i < n; i++) 
        {
            fi_0 = fi_1;
            fi_1 = fi_n;
            fi_n = fi_0 + fi_1;
			printf("%d ", fi_n);
        }
    }
    return 0;
}
