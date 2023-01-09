#include <stdio.h>
#include <stdlib.h>

  
int main() 
{
	FILE *fi;
	fi = fopen("input.txt","rt");
	if (fi==NULL)
	{
		printf("Khong mo dc file doc !");
		return 0;
	}
   	FILE *fo;
	fo= fopen("output.txt", "wt");
	if(fo==NULL)
	{
		printf("khong mo dc file ghi !");
		return 0;
	}
    int n, a, b, i, j, sum = 0;
  
    // nhap du lieu tu file input
    fscanf(fi, "%d%d%d", &n, &a, &b);
    int G[n][n];
    int dau[n], Len[n], P[n];
  
    // nhap ma tran va tinh gia tri vo cung (sum)
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++) 
		{
            fscanf(fi, "%d", &G[i][j]);
            sum += G[i][j];
        }
 
    for (i = 1; i <= n; i++) 
        for (j = 1; j <= n; j++) 
            if (i != j && G[i][j] == 0)
                G[i][j] = sum;
  
  
    for (i = 1; i <= n; i++) 
	{
        Len[i] = sum;                   
        dau[i] = 0;                       
        P[i] = a;                       
    }
  
    Len[a] = 0;                         
  
    while (dau[b] == 0) 
	{               
        for (i = 1; i <= n; i++)          
            if (dau[i]==0 && Len[i] < sum)
                break;
        if (i > n) 
		{
            printf("Duyet xong\n");
            break;
        }
  		//Tìm min
        for (j = 1; j <= n; j++) 
            if (dau[j]==0 && Len[i] > Len[j]) 
                i = j;
    
        dau[i] = 1;                       
  
        for (j = 1; j <= n; j++) 
		{    
            if (dau[j]==0 && Len[i] + G[i][j] < Len[j]) 
			{
                Len[j] = Len[i] + G[i][j];      // thay doi len
                P[j] = i;                       // danh dau diem truoc no
            }
        }
    }
  
  
    if (Len[b] > 0 && Len[b] < sum) 
	{
        fprintf(fo, "Do dai tu dinh %d den dinh %d la %d\n", a, b, Len[b]);
        while (i != a) 
		{
            fprintf(fo, "%d <-- ", i);
            i = P[i--];
        }
        fprintf(fo, "%d", a);
    }
	else
        fprintf(fo, "Khong co duong di tu dinh %d den dinh %d\n", a, b);
  
    fclose(fi);
    fclose(fo);
    return 0;
}
