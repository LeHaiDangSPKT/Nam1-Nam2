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
    FILE *fi;
	fi = fopen("Chuong01_19_input.txt","wt");
	if (fi == NULL)
	{
		printf("Khong xuat duoc");
		exit (0);
	}
	int dem = 0;
	srand(time(NULL));
    for(int i = 0; i < 10000; i++)
	{
		dem++;
       	a[i] = random(1,32767);
       	fprintf(fi,"%d ",a[i]);
		if (dem%10==0)
			fprintf(fi,"\n");		    
    }    
    
    
    FILE *fo;
	fo = fopen("Chuong01_19_output.txt","wt");
	if (fo == NULL)
	{
		printf("Khong xuat duoc");
		exit (0);
	}
	for (int i = 0; i<10000; i++)
    {
    	for (int j = i+1; j<10000; j++)
    	{
			if (a[j]<a[i])
    		{
				int t = a[j];
					a[j] = a[i];
					a[i] = t;
			}		
		}
	}
	int check = 0;
	for (int i = 0; i<10000; i++)
	{
		check++;
    	fprintf(fo, "%d ", a[i]);
    	if (check%10==0)
    		fprintf(fo, "\n");
	}
    return 0;
}
