	#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int random(int minN, int maxN)
    return (minN + rand() % (maxN + 1 - minN));
void main()
{
    srand((int)time(0));
    int r;
    FILE *f;
    f = fopen("Chuong01_20_output","wt");
    for(int i = 0; i < 10000; i++)
	{
        r = random(1,32767);
        fprintf(f,"%d ",r);
    }  
}

 
