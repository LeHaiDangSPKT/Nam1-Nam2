#include <stdio.h>
#define N 100
int kiemtra(int so, int check[N], int dem)
{
	for (int i=0; i<dem; i++)
		if (so==check[i])
			return 0;
	return 1;
}
void duyet(int a[N], int n)
{
	int check[N], dem=1;
	for (int i=0; i<n; i++)
		if (kiemtra(a[i], check, dem)!=0)
		{
			printf("%d ", a[i]);
			check[dem]=a[i];
			dem++;
		}				
}
int main()
{
	int a[N], n, hop[N];
	scanf("%d", &n);
	for (int i=0; i<n; i++)
		scanf("%d", &a[i]);
	duyet(a,n);
	return 0;
}
