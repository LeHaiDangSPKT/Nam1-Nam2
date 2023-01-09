#include <stdio.h>
int tinhnhuan(int a)
{	
	if (a%100==0)
	{
		if (a%400==0) 
			return 1; 
		return 0;
	}		   
	else if (a%4==0) 
		return 1;
	return 0;
}
int tinhthang(int thang)
{
	switch(thang)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: return 1;
		case 4:
		case 6:
		case 9:
		case 11: return 0;
	}
}

int main()
{
	int d,m,y;
	printf("Nhap ngay: "); scanf("%d", &d);
	printf("Nhap thang: "); scanf("%d", &m);
	printf("Nhap nam: "); scanf("%d", &y);
	if (y>=0 && m>0 && m<=12 && d>0 && d<=31)
	{
		d++;
		if (m==2 && tinhnhuan(y)==1)
			if (d==30)
				printf("Ngay tiep theo la: %d/%d/%d", 1,m+1,y);
			else if (d<30)
				printf("Ngay tiep theo la: %d/%d/%d", d,m,y);
			else
				printf("Nhap sai");
		else if (m==2 && tinhnhuan(y)==0)
			if (d==29)
				printf("Ngay tiep theo la: %d/%d/%d", 1,m+1,y);
			else if (d<29)
				printf("Ngay tiep theo la: %d/%d/%d", d,m,y);
			else
				printf("Nhap sai");
		else if (tinhthang(m)==1)
			if (m==12)
				if (d>31)
					printf("Ngay tiep theo la: %d/%d/%d", 1,1,y+1);
				else
					printf("Ngay tiep theo la: %d/%d/%d", d,m,y);
			else
				if (d>31)
					printf("Ngay tiep theo la: %d/%d/%d", 1,m+1,y);
				else
					printf("Ngay tiep theo la: %d/%d/%d", d,m,y);
		else
			if (d>30)
					printf("Ngay tiep theo la: %d/%d/%d", 1,m+1,y);
			else
					printf("Ngay tiep theo la: %d/%d/%d", d,m,y);	
	}
	return 0;
}
