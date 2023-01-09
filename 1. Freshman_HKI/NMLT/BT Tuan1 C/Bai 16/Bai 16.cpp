#include<stdio.h>

void nhap(int &thang, int &nam);
int tinh(int thang, int nam);
void xuat(int tinh, int thang, int nam);

void main()
{
	int thang,nam;
	nhap(thang, nam);
	int kq=tinh(thang, nam);
	xuat(kq, thang, nam);
	scanf("%d");
}

void nhap(int &thang, int &nam)
{
	printf("nhap thang: ");
	scanf("%d",&thang);
	printf("nhap nam: ");
	scanf("%d",&nam);
}

int tinh(int thang, int nam)
{
	switch(thang)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: return 31;
		case 4:
		case 6:
		case 9:
		case 11: return 30;
		case 2:
				if (nam%100==0)
	                {
						if (nam%400==0) 
							return 29;
	                    else 
							return 28;
					}
	            else if(nam%4==0) 
					return 29;
	            else 
					return 28;
	}
}

void xuat(int tinh, int thang, int nam)
{
	if(tinh==28)
		printf("thang %d nam %d co 28 ngay", thang, nam);
	else if (tinh==29)
		printf("thang %d nam %d co 29 ngay", thang, nam);
	else if (tinh==30)
		printf("thang %d nam %d co 30 ngay", thang, nam);
	else
		printf("thang %d nam %d co 31 ngay", thang, nam);
}

