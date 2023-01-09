#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int random(int minN, int maxN)
{

    return minN + rand() % (maxN + 1 - minN);
}
 
int main()
{
    int a[10000];
    FILE *f;
	f = fopen("Chuong01_21_input.txt","wt");
	if (f == NULL)
	{
		printf("Khong xuat duoc");
		exit (0);
	}
		srand(time(NULL));
    for(int i = 0; i < 10000; ++i)
	{
        a[i] = random(1,32767);
        fprintf(f,"%d ",a[i]);
    }    
    
    
    FILE *fc;
	fc = fopen("Chuong01_21_outputchan.txt","wt");
	if (fc == NULL)
	{
		printf("Khong xuat duoc");
		exit (0);
	}
	FILE *fl;
	fl = fopen("Chuong01_21_outputle.txt","wt");
	if (fl == NULL)
	{
		printf("Khong xuat duoc");
		exit (0);
	}
	
	
    for(int i = 0; i < 10000; i++)
	{
        if (a[i]%2==0)
        	fprintf(fc,"%d ",a[i]);
        else
        	fprintf(fl,"%d ",a[i]);
    }    
    return 0;
    
    
}
