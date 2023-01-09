#include <stdio.h>
#define N 100
int main()
{
	int n;
	scanf("%d", &n);
	int a[N][N], mchan[N], chan = 0, mle[N], le = 0;
	//Nhap mang a, tach thanh mang chan va mang le
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
		{
			scanf("%d", &a[i][j]);
			if (a[i][j]%2==0)
				mchan[chan++] = a[i][j];
			else
				mle[le++] = a[i][j];
		}
	//tim chan max
	int max = mchan[0];
	for (int i=1; i<chan; i++)
		if (mchan[i]>max)
			max = mchan[i];
	//sap xep mang le tang dan
	for (int i=0; i<le; i++)
		for (int j=i+1; j<le; j++)
			if (mle[i]>mle[j])
			{
				int temp = mle[i];
					mle[i]=mle[j];
					mle[j]=temp;
			}
	//giai quyet de bai
	for (int i=0; i<le; i++)
	{
		if (mle[i]>max)
		{
			printf("%d", mle[i]);
			break;
		}
	}
			
	return 0;
}
