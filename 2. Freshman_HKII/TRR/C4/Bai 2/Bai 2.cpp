#include <stdio.h>

#define N 100

void nhapdothi(int &n, int a[N][N]);
int tplt(int n, int a[N][N]);
void main()
{
	int n;
	int a[N][N];
	nhapdothi(n,a);
	printf("So thanh phan lien thong: %d", tplt(n, a));
}

void nhapdothi(int &n, int a[N][N])
{	
	FILE *f;
	f = fopen("bai 2.txt","rt");
	if (f==NULL)
	{
		printf("Khong mo dc file !");
		return;
	}
	fscanf(f,"%d",&n);
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)
			fscanf(f,"%d",&a[i][j]);
	fclose(f);
}

int tplt(int n, int a[N][N])
{
   char*DanhDau = new char [n];
   char ThanhCong;
   int Dem=0, i,j, MLT=0;
   for( i = 0; i<n; i++)         
      DanhDau[i] = 0;
   do {   
    j = 0;
      while(DanhDau[j]==1)   
         j++;
      DanhDau[j] = 1;      
      Dem++;         
      MLT++;         
      do {
         ThanhCong =0;   
         for(i = 0; i<n; i++)
         if(DanhDau[i]==1)
            for(j = 0; j<n; j++)
            if (DanhDau[j] == 0 && a[i][j] > 0) {
               DanhDau[j] = 1;
               ThanhCong =1;   
               Dem++;
               if(Dem == n) return MLT;
            }
      }while (ThanhCong == 1);   
   } while(Dem<n);         
   return MLT;
}



