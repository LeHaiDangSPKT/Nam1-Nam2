#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<string.h>

struct quan
{
	int x,y;
	char name[20];
};

void text(int x, char t[])
{
	int n=0;
	while(x>0)
	{
		t[n]=char(x%10+48);
		n++;
		x/=10;
	}
	t[n]='\0';
	strrev(t);
}

bool sosanh(char u[], char v[])
{
	int l1=strlen(u), l2=strlen(v);
	if(l1==l2)
	{
		for(int i=0; i<l1; i++)
			if(u[i]!=v[i]) return false;
		return true;
	}
	return false;
}

void floyd(int n, int time[][100], int p[][100], int t[][100])
{
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
		{
			t[i][j]=time[i][j];
			p[i][j]=j;
		}
	for(int k=0; k<n; k++)
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
				if(t[i][j]>t[i][k]+t[k][j])
				{
					t[i][j]=t[i][k]+t[k][j];
					p[i][j]=p[i][k];
				}
}

int main()
{
	quan q[30];	
	int n, map[100][100], time[100][100], p[100][100], t[100][100];
	FILE *f;
	f = fopen("INPUT.txt","rt");
	if (f==NULL)
	{
		printf("Khong mo dc file !");
		return 0;
	}
	fscanf(f,"%d",&n);
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)
		{
			fscanf(f,"%d",&time[i][j]);
			if(time[i][j]==0) time[i][j]=150;
		}		
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)
			fscanf(f,"%d",&map[i][j]);
	for (int i=0;i<n;i++)
	{
		fscanf(f,"%d", &q[i].x );
		fscanf(f,"%d", &q[i].y );
		fscanf(f,"%s", &q[i].name );
		q[i].x+=50;
	}		
	fclose(f);
	
	int gd = DETECT, gm, x, y;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
   	delay(5000);   
    setbkcolor(15); //xac lap mau nen
  	settextjustify(1, 1);  //xac dinh vi tri van ban viet ra (tam l� vi tri con tro, xung quanh con tro)
  	setlinestyle(0,0,3); //kieu duong, mau to, do dam-->(duong dac, 0, net ve dam)
  	
  	setcolor(10);  //thiet lap mau
  	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)
			if(time[i][j]<150) 
			{
				line(q[i].x, q[i].y, q[j].x, q[j].y);  //ve duong noi hai diem A(q[i].x, q[i].y) v� B(q[j].x, q[j].y)
				//printf("1 ");
			}
				
			
	setcolor(12);
	settextstyle(0,0,1); //thiet lap kieu chu hien ra tr�n m�n h�nh (font, nam ngang tu trai qua phai, phong to)
	char te[10];//trong so thoi gian kieu char
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)
			if(time[i][j]<150) 
			{
				text(time[i][j], te);  //chuyen trong so time from int to char
				outtextxy((q[i].x+q[j].x)/2, (q[i].y+q[j].y)/2, te);  // hien thi noi dung cua te tai toa do x,y
			}
				
	setcolor(0);
	settextstyle(0,0,2);		                                                 
    for(int i=0; i<n; i++)
    {
   		outtextxy(q[i].x, q[i].y, q[i].name);
    }
    outtextxy(q[n-1].x, q[n-1].y, q[n-1].name);
    
    floyd(n,time,p,t);
    
	int a=-1, b=-1, check=1;
	while(check==1)
	{
		system("cls");  //xoa man hinh
    	char u[100], v[100];
		printf("nhap noi bat dau va ket thuc: ");
		gets(u); gets(v);
		for(int i=0; i<n; i++)
			if(sosanh(q[i].name,u)) a=i;
			else if(sosanh(q[i].name,v)) b=i;
		printf("lo trinh nhanh nhat la:\n%s", q[a].name);
		int temp1=a, d=0;// d luu so km
		setlinestyle(0,0,3);
    	while(temp1!=b)
		{
			int u=temp1;
			temp1=p[temp1][b];
			printf("--> %s", q[temp1].name);
			d+=map[u][temp1];
			
			setcolor(9);
			line(q[u].x, q[u].y, q[temp1].x, q[temp1].y);

			setcolor(12);
			settextstyle(0,0,1);
			text(time[u][temp1], te);
			outtextxy((q[u].x + q[temp1].x)/2, (q[u].y+q[temp1].y)/2, te);
			
			setcolor(4);
			settextstyle(0,0,2);
			outtextxy(q[u].x, q[u].y, q[u].name);
			delay(50);
		}
		outtextxy(q[temp1].x, q[temp1].y, q[temp1].name);
		printf("\ntong thoi gian di la: %d (m)", t[a][b]);
		printf("\ntong quang duong di la: %d (km)\n", d);
    	printf("nhan 1 de tiep tuc hoac 0 de thoat: ");
    	scanf("%d", &check);
    	int temp2=a;
		setlinestyle(0,0,3);
    	while(temp2!=b)
		{
			int u=temp2;
			temp2=p[temp2][b];
			
			setcolor(10);
			line(q[u].x, q[u].y, q[temp2].x, q[temp2].y);

			setcolor(12);
			settextstyle(0,0,1);
			text(time[u][temp2], te);
			outtextxy((q[u].x + q[temp2].x)/2, (q[u].y+q[temp2].y)/2, te);
			
			setcolor(0);
			settextstyle(0,0,2);
			outtextxy(q[u].x, q[u].y, q[u].name);
			delay(50);
		}
		outtextxy(q[temp2].x, q[temp2].y, q[temp2].name);
	}
	return 0;
}
