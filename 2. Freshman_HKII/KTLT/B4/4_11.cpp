#include <stdio.h>
#define N 100


/*BAI 1
void nhapmang(int A[], int &n)
{
	scanf("%d",&n);
	for (int i=0; i<n; i++)
		scanf("%d", &A[i]);
}
int Min(int A[], int n)
{
	if (n==0)
		return -1;
	if (n==1)
		return A[0];
	else
	{
		if (A[n - 1] < Min(A, n - 1))
			return A[n - 1];
		else
			return Min(A, n - 1);
	}
}
int main()
{
	int A[100];
	int n;
	nhapmang(A,n);	
	int kq=Min(A,n);
	printf("Phan tu nho nhat la: %d", kq);
	return 0;
}*/






/*BAI 2
void nhapmang(int a[], int &n)
{
	scanf("%d",&n);
	for (int i=0; i<n; i++)
		scanf("%d", &a[i]);
}
int Tong(int a[], int n)
{
    if (n == 1)
        return a[0];
    return Tong(a, n-1) + a[n-1];
}

int main()
{
	int a[N], n;
	nhapmang(a,n);
	int kq = Tong(a,n);
	printf("Ket qua la: %d", kq);
	return 0;
}*/





/*BAI 3
double giaithua(int n)
{
	if (n==1)
		return 1;
	else
		return n*giaithua(n-1);
}
int main()
{
	int n; 
	printf("Nhap n: "); scanf("%d", &n);
	printf("Ket qua la: %.0lf",giaithua(n));
}*/





/*BAI 4
int tim(int a[N], int l, int r, int so)
{
	if (r>=l)
	{
		int mid = l+(r-l)/2;
		if (a[mid]==so)
			return mid;
		else if (a[mid] > so)
			return tim(a,l, mid-1, so);
		else if (a[mid]<so)
			return tim(a,mid+1,r,so);
		else
			return -1;
	}
}
void sapxeptang(int a[], int n)
{
	for (int i=0; i<n; i++)
		for (int j=i+1; j<n; j++)
			if (a[i]>a[j])
			{
				int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
			}
}
void saochep(int a[], int b[], int n)
{
	for (int i=0; i<n; i++)
		b[i]=a[i];
}
int main()
{
	int a[N], b[N], n, so;
	printf("Nhap so phan tu cua mang: "); scanf("%d", &n);
	printf("Nhap phan tu cho mang: ");
	for (int i = 0; i<n; i++)
		scanf("%d", &a[i]);
	saochep(a,b,n);
	sapxeptang(a,n);
	printf("Nhap so can tim: "); scanf("%d", &so);
	int kq = tim(a,0,n-1, so);
	if (kq == -1)
		printf("Khong tim thay");
	else
	{
		for (int i=0; i<n; i++)
			if (a[kq]== b[i])
			{
				printf("So can tim xuat hien o vi tri thu %d", i);
				break;
			}		
	}
		
	return 0;
}*/








/*BAI 5
double giaithua(int n)
{
    double gt=1;
    for (int i=1; i<=n; i++)
        gt=gt*i;
    return gt;
}
 
double ckn(int k, int n)
{
    return (giaithua(n)/(giaithua(k)*giaithua(n-k)));
}

int main()
{
    int n, k;
    printf("Nhap lan luot k, n : ");
    scanf("%d%d",&k,&n);
    double kq = ckn(k, n);
    printf("Ckn = %.0lf",kq);
    return 0;
}*/
