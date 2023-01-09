#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[102], dem=0;
    FILE *fi;
	fi = fopen("Chuong01_22_input.txt","wt");
	if (fi == NULL)
	{
		printf("Khong xuat duoc");
		exit (0);
	}
    for(int i = 0; i <= 100; i++)
	{
		if (i%2==0)
		{
			a[dem] = i;
			fprintf(fi,"%d ",a[dem]);
			dem++;
    	}    
    } 
	
	FILE *fo;
	fo = fopen("Chuong01_22_output.txt","wt");
	if (fo == NULL)
	{
		printf("Khong xuat duoc");
		exit (0);
	}
	int check;
    for(int i = 0; i < dem; i++)
	{
		check++;
        fprintf(fo,"%d ",a[i]);
        if (check%30==0)
        	fprintf(fo,"\n");
    } 
    return 0;
    
}
