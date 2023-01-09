#include <stdio.h>

void nhap(int &n, int &k);
float tinh(int n, int k);
void xuat(int tinh);

void main()
{
	int n, k;
	nhap(n, k);
	float kq=tinh(n,k);
	xuat(kq);
	scanf("%d");
}	

void nhap(int &n, int &k)
{
	scanf("%d", &n);
	scanf("%d", &k);
}

float tinh(int n, int k)
{
	int tu=1, mau1=1, mau2=1;
	if(k>n)
		return 0;
	for(int i=1; i<=n; i++)
		tu*=i;
	for(int j=1; j<=k; j++)
		mau1*=j;
	for(int h=1; h<=(n-k); h++)
		mau2*=h;
	float thuong=(float)tu/(mau1*mau2);
	return thuong;
}

void xuat(int tinh)
{
	if(tinh==0)
		printf("Error");
	else
		printf("Ket qua la: %d", tinh);
}