#include <stdio.h>
#define N 100
void main()
{
	int i=0, a[1000], sum = 0;
	FILE *fi;
	fi = fopen("TinhTong.INP.txt","rt");
/*	if (fi == NULL)
	{
		printf("Khong xuat duoc");
		exit();
	}*/
	do 
	{
		fscanf(fi,"%d", &a[i]);
		i++;
	}
	while (a[i-1]==NULL);
	fclose(fi);
	
	FILE *fo;
	fo = fopen("TinhTong.OUT.txt","wt");
/*	if (fo == NULL)
	{
		printf("Khong xuat duoc");
		exit();
	}*/
	fprintf(fo, "%d", i);
	for (int j=0; j<i; j++)
	{
		if (a[j]!=i-1)
			sum+=a[j];
	}
	fprintf(fo, "%d", sum);
	fclose(fo);
}