#include <stdio.h>
#include <string.h>

void dec2bin(int x, char s[])
{
	if (x==0)
	{
		s[0] = '0';
		s[1] = 0;
		return;
	}
	else
	{
		int sodu, k =0, dem = 0;
		while (x>0)
		{
			sodu = x%2;
			s[k] = sodu +'0';
			k++;
			dem++;
			if (dem%4 ==0)
			{
				s[k] = ' ';
				k++;
			}
			x = x/2;
			
		}
		sodu=dem%4;
		if (sodu > 0)
		{
			int thieu = (dem/4+1)*4 -dem;
			for (int i = 0; i<thieu; i++)
			{
				s[k++] = '0';
			}
		}
		else if (sodu == 0)
		{
			s[k-1] = 0;  
		}
		strrev(s);
	}
}

int main()
{
	int n;
	char s[100] ="";;
	scanf("%d", &n);
	dec2bin(n,s);
	puts(s);
	return 0;
}
