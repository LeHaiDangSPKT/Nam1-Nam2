#include <stdio.h>

void main()
{
	int *x;
	int y =3;
	*x = y;
	*x += y++;
	printf("%d", *x);
}