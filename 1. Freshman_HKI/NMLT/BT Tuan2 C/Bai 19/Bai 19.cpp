#include <stdio.h>

void nhap(int &n);
int tinh(int n);
void xuat(int tinh);

void main()
{
	int n;
	nhap(n);
	int kq=tinh(n);
	xuat(kq);
}

void nhap(int &n)
{
	scanf("%d", &n);
}

int tinh(int n)
{
	int count1=0;
	for(int i=1; i<n; i++)
	{
		int count2=0;
		for(int j=1; j<=i; j++)
		{
			if(i%j==0)
				count2++;
		}		
		if (count2==2)
			count1++;
	}
	return count1;
}

void xuat(int tinh)
{
	if(tinh==0)
		printf("Khong co so nguyen to nào nho hon n");
	else
		printf("%d", tinh);
}