#include <stdio.h>
#define N 100
void nhapmang(int a[], int &n)
{
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
		scanf("%d", &a[i]);
}
int max(int chan[], int c)
{
	int max = chan[0];
	for (int i=0; i<c; i++)
		if (chan[i]>max)
			max = chan[i];
	return max;
}
void sapxeptang(int le[], int l)
{
	for (int i=0; i<l; i++)
		for (int j=i+1; j<l; j++)
			if (le[i]>le[j])
			{
				int temp = le[i];
					le[i]=le[j];
					le[j]=temp;
			}
}
int tinh(int a[], int n)
{
	int chan[N], c=0, le[N], l=0;
	//tach 2 mang chan le
	for (int i = 0; i<n; i++)
		if (a[i]%2==0)
			chan[c++]=a[i];
		else
			le[l++]=a[i];
			
			
	sapxeptang(le, l);
	for (int i=0; i<l; i++)
		if (le[i]>max(chan, c))
			return le[i];
}
int main()
{
	int a[N], n;
	nhapmang(a, n);
	int kq = tinh(a, n);
	printf("Ket qua la: %d", kq);
	return 0;
}
