#include <stdio.h>
#include <algorithm>
#include <time.h>
int main()
{
	int a[32770];
	FILE *f;
	f = fopen("Chuong01_20_output.txt","wt");
	if (f == NULL)
	{
		printf("Khong xuat duoc");
		exit (0);
	}
    for(int i = 1; i <= 32767; i++)
        a[i] = i;
    srand(time(NULL));
    std::random_shuffle(a, a + 32767);
    int check = 0;
    for(int i = 1; i <= 10000; i++)
    {
    	check++;
		fprintf(f,"%d ", a[i]);
		if (check%20==0)
		fprintf(f,"\n");
	}
	return 0;
}

