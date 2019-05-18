#include"ishaan.h"
int a[9]={0,0,0,0,0,0,0,0,0},c=0,b[8]={0,0,0,0,0,0,0,0};
struct pos
{
	int x;
	int y;
	int value;
};
struct pos cord[9];
void setData();
void Bboundry();
void block(int);
void sel();
void printSeq();
void setValue();
void cBlock(int);
void print_file();
int check();
int main()
{
	int i,pos,f,moves=0;
	unsigned char w;
	char name[20],c;
	FILE *fp;
	//system("pause");
	setData();
	printf("Enter your name>>>");
	gets(name);
	fflush(stdin);
	system("cls");
	Bboundry();
	sel();
	setValue();
	printSeq();
	for(i=0;i<9;i++)
	{
		if(a[i]==0)
		{
			pos=i;
			break;
		}
	}
	while(1)
	{
		w=getch();
		moves++;
		if(w==72)
		{
			if(pos+3<=8)
			{
				cord[pos].value=cord[pos+3].value;
				cord[pos+3].value=0;
				a[pos]=pos+1;
				a[pos+3]=0;
				block(pos);
				pos+=3;
				cBlock(pos);
			}
		}
		if(w==80)
		{
			if((pos-3)>=0)
			{
				cord[pos].value=cord[pos-3].value;
				cord[pos-3].value=0;
				a[pos]=pos+1;
				a[pos-3]=0;
				block(pos);
				pos-=3;
				cBlock(pos);
			}
		}
		if(w==75)
		{
			if(pos!=2&&pos!=5&&pos!=8)
			{
				cord[pos].value=cord[pos+1].value;
				cord[pos+1].value=0;
				a[pos]=pos+1;
				a[pos+1]=0;
				block(pos);
				pos+=1;
				cBlock(pos);
			}
		}
		if(w==77)
		{
			if(pos!=0&&pos!=3&&pos!=6)
			{
				cord[pos].value=cord[pos-1].value;
				cord[pos-1].value=0;
				a[pos]=pos+1;
				a[pos-1]=0;
				block(pos);
				pos-=1;
				cBlock(pos);	
			}
		}
		printSeq();
		if(check()==1)
		{
			break;
		}
	}
	getch();
	system("cls");
	printf("you win");
	fp=fopen("block_score.dat","a");
	fprintf(fp,"%s\t\t\t",name);
	fprintf(fp,"%d\n",moves);
	fclose(fp);
	printf("\n\n do you want to view the score log y/n\t");
	scanf("%c",&c);
	if(c=='y'||c=='Y')
	print_file();
	getch();
	return 0;
}
void Bboundry()
{
	int i,b=0;
	printf(" ");
	for(i=1;i<=34;i++)
	printf("--");
	gotoxy(0,0);
	for(i=1;i<=32;i++)
	printf("\n|");
	printf("\n ");
	for(i=1;i<=34;i++)
	printf("--");
	for(i=1;i<=32;i++)
	{
		gotoxy(69,++b);
		printf("|");
	}
	b=0;
	for(i=1;i<=32;i++)
	{
		gotoxy(23,++b);
		printf("|");
	}
	b=0;
	for(i=1;i<=32;i++)
	{
		gotoxy(46,++b);
		printf("|");
	}
	gotoxy(1,11);
	for(i=1;i<=34;i++)
	{
		printf("--");
	}
	gotoxy(1,22);
	for(i=1;i<=34;i++)
	{
		printf("--");
	}
	printf("\n\n\n");
}
void block(int n)
{
	int i,j,k;
	k=cord[n].y;
	for(i=0;i<10;i++)
	{
		gotoxy((cord[n].x),++k);
		for(j=0;j<10;j++)
		printf("±±");
	}
}
void sel()
{
	int i,c=0;
	srand(time(0));
	while(1)
	{
		i=rand()%9+1;
		if(inArray(a,i,9)==0)
		{
			c++;
			a[i-1]=i;
			block(i-1);
			if(c==8)
			{
				break;
			}
		}
	}
}
void printSeq()
{
	int i;
	for(i=0;i<9;i++)
	{
		if(inArray(a,i+1,9))
		{
			gotoxy(cord[i].x+7,cord[i].y+6);
			printf("  %d  ",cord[i].value);
		}
	}
}
void setData()
{
	int i=0;
	cord[i].x=02;
	cord[i].y=00;
	i++;
	cord[i].x=25;
	cord[i].y=00;
	i++;
	cord[i].x=48;
	cord[i].y=00;
	i++;
	cord[i].x=02;
	cord[i].y=11;
	i++;
	cord[i].x=25;
	cord[i].y=11;
	i++;
	cord[i].x=48;
	cord[i].y=11;
	i++;
	cord[i].x=02;
	cord[i].y=22;
	i++;
	cord[i].x=25;
	cord[i].y=22;
	i++;
	cord[i].x=48;
	cord[i].y=22;
}
void setValue()
{
	int i,c=0,j=0;
	srand(time(0));
	while(1)
	{
		i=rand()%8+1;
		if(inArray(b,i,8)==0)
		{
			if(a[j]!=0)
			{
				b[c++]=i;
				cord[j].value=i;
			}
			j++;
		}
		if(c==8)
		{
			break;
		}
	}
}
void cBlock(int n)
{
	int i,j,k;
	k=cord[n].y;
	for(i=0;i<10;i++)
	{
		gotoxy((cord[n].x),++k);
		for(j=0;j<10;j++)
		printf("  ");
	}
}
int check()
{
	int i,flag=1;
	for(i=0;i<9;i++)
	{
		if(a[i]!=cord[i].value)
		{
			flag=0;
			break;
		}
	}
	return flag;
}
void print_file()
{
	FILE *fp;
	char s[100];
	printf("\n\n");
	fp=fopen("block_score.dat","r");
	while(fgets(s,79,fp)!=NULL)
	{
		printf("%s",s);
	}
	fclose(fp);
	getch();
}
