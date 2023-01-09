#include <stdio.h>

void nhap(int  &n);
void check(int tien, int to, int so);
int tinh(int n, int &mottram, int &nammuoi, int &haimuoi, int &muoi);
void xuat(int mottram, int nammuoi, int haimuoi, int muoi);

void main()
{
	int n, mottram, nammuoi, haimuoi, muoi;
	nhap(n);
	int kq=tinh(n, mottram, nammuoi, haimuoi, muoi);
	xuat(mottram, nammuoi, haimuoi, muoi);
	scanf("%d");
}

void nhap(int &n)
{
	printf("Nhap so tien can rut: "); scanf("%d", &n);
}


int tinh(int n, int &mottram, int &nammuoi, int &haimuoi, int &muoi)
{	
	mottram=0;
	nammuoi=0;
	haimuoi=0;
	muoi=0;
	if(n/100000!=0)
	{
		check(n, mottram, 100000);
		if(n/50000!=0)
		{
			nammuoi=n/50000;
			n=n-nammuoi*50000;
			if(n/20000!=0)
			{
				haimuoi=n/20000;
				n=n-haimuoi*20000;
				if(n/10000!=0)
				{
					muoi=n/10000;
				}
			}
			else
				muoi=n/10000;
		}
		else 
		{
			if(n/20000!=0)
			{
				haimuoi=n/20000;
				n=n-haimuoi*20000;
				if(n/10000!=0)
				{
					muoi=n/10000;
				}
			}
			else
				muoi=n/10000;
		}
	}
	else
	{
		if(n/50000!=0)
		{
			nammuoi=n/50000;
			n=n-nammuoi*50000;
			if(n/20000!=0)
			{
				haimuoi=n/20000;
				n=n-haimuoi*20000;
				if(n/10000!=0)
				{
					muoi=n/10000;
				}
			}
			else
				muoi=n/10000;
		}
		else 
		{
			if(n/20000!=0)
			{
				haimuoi=n/20000;
				n=n-haimuoi*20000;
				if(n/10000!=0)
				{
					muoi=n/10000;
				}
			}
			else
				muoi=n/10000;
		}	
	}
	return 0;
}

void xuat(int mottram, int nammuoi, int haimuoi, int muoi)
{
	printf("Khach hang nhan duoc cac to tien menh gia sau: \n");
	printf("To 100.000: %d\n", mottram);
	printf("To 50.000: %d\n", nammuoi);
	printf("To 20.000: %d\n", haimuoi);
	printf("To 10.000: %d\n", muoi);
}
