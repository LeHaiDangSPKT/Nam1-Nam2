#include <stdio.h>

void nhap(char &c);
int doi(char c, char &s);
void xuat(int doi, char s); 

void main() {
	char c,s;
	nhap(c);
	int kq=doi(c, s);
	xuat(kq,s);
	scanf("%d");
}

void nhap(char &c) {
	scanf("%c", &c);
}

int doi(char c, char &s) {
	 if (c>='a'&& c<='z')
	 {	
		s=c-32;
		return 1;
	 }
	 else if (c>='A'&&c<='Z')
	 {
		s=c+32;
        return 2;
	 }
    else 
		return 0;
}

void xuat(int doi, char s) {
	if (doi==1)
		printf("Changed: %c", s);
	else if (doi==2)
		printf("Changed: %c", s);
	else
		printf("Error");
}
