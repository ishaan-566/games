#include"ishaan.h"
int t[3][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0}},n,s[4]={15,10,5,0},le[4]={5,10,15,20},blc[4]={0,0,0,0},no[3]={0,0,0};
void block(int from ,int to);
void init();
void print();
void tower(int m,int a,int b, int c);
void stick();
void check(int ,int);
void scorec(int n,char name[20]);

int main()
{
	printf("enter your name : ");
	char name[20];
	gets(name);
	fflush(stdin);
	do
	{
		printf("enter how many disks from 2 to 4->>>");
		scanf("%d",&n);
	}while(n<2||n>4);
	init();
	tower(n,1,2,3);
	gotoxy(0,50);
	printf("you win");
	scorec(n,name);
	getch();
	return 0;
}
void init()
{
	int i,j,b=30,k;
	for(i=0;i<n;i++)
	{
		t[0][i]=i+1;
	}
	no[0]=n;
	print();
}
void block(int from,int to)
{
	int i,j,b,m=0;
	for(i=n-1;i>=1;i--)
	{
		t[to-1][i]=t[to-1][i-1];
	}
	t[to-1][0]=t[from-1][0]	;
	for(i=0;i<n-1;i++)
	{
		if(i<n)
		t[from-1][i]=t[from-1][i+1];
		else
		t[from-1][i]=0;
	}
	for(i=n-1;i<4;i++)
	{
		t[from-1][i]=0;
	}
	b=30-(no[from-1]*3);
	if(from==1)
	{
		m=0;
	}
	else if(from==2)
	{
		m=50;
	}
	else
	{
		m=100;
	}
	for(i=0;i<3;i++)
	{
		gotoxy(m,++b);
		for(j=0;j<20;j++)
		{
			printf("  ");
		}	
	}
	no[from-1]--;
	no[to-1]++;
	print();
}
void print()
{
	int i,j,k,l,b=30,m,n=0;
	stick();
	for(i=0;i<3;i++)
	{
		for(j=3;j>=0;j--)
		{
			k=t[i][j];
			if(k!=0)
			{
				for(l=0;l<3;l++)
				{
					gotoxy(s[k-1]+n,b--);
					for(m=0;m<2*le[k-1];m++)
					{
						printf("±");
					}
				}
			}
		}
		b=30;
		n+=50;
	}
}
void tower(int m,int a, int b,int c)
{
	int d,e;
	if(m==1)
	{
		d=a;
		e=c;
		check(d,e);
		//block(d,e);
		return;
	}
	tower(m-1,a,c,b);
	d=a;
	e=c;
	check(d,e);
	//block(d,e);
	tower(m-1,b,a,c);
}
void stick()
{
	int i,j=2,k;
	while(j>=0)
	{
		if(j==2)
		{
			k=21;
		}
		else if(j==1)
		{
			k=20;
		}
		else
		{
			k=19;
		}
		for(i=15;i<=30;i++)
		{
			gotoxy(j*49+k,i);
			printf("||");
		}
		gotoxy(j*49+k-5,i+1);
		printf("-----%d-----",j+1);
		j--;
	}
}
void check(int a, int b)
{
	int c,d;
	label:
	gotoxy(0,40);
	printf("                                          ");
	gotoxy(0,41);
	printf("                     ");
	gotoxy(0,40);
	printf("enter coordinates>> from ",a,b);
	switch(getche())
	{
		case '1': c=1;break;
		case '2': c=2;break;
		case '3': c=3;break;
		default : goto label;
	}
	printf(" to ");
	labl:
	switch(getche())
	{
		case '1': d=1;break;
		case '2': d=2;break;
		case '3': d=3;break;
		default : gotoxy(30,40);printf(" \b");goto labl;
	}
	printf("\nare you sure(y/n)");
	if(getch()=='n')
	{
		goto label;
	}
	if(c!=a||d!=b)
	{
		printf("fail");
		exit(0);
	}
	block(a,b);
}
void scorec(int n,char name[20])
{
	FILE *fp;
	fp=fopen("hanoi_data.dat","a");
	fprintf(fp,"%s\t\t\t",name);
	fprintf(fp,"%d\n",n);
	fclose(fp);
}
