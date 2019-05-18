#include"ishaan.h"
int xa[50],ya[50],co=0,cp=0,l,m,u,w,score=0,sct[5],i,len=3;
void setArray();
void print_file();
void scorec(int sco,char name[20]);
void snake(int pos,int z);
void obs(int *p,int *q);
void boundry();
void obs2();
void obs3();
void point(int *p,int *q);
int main()
{
	int x=22,y=20,a,b,g,h,f,i,j=1;
	unsigned char c,cb=0;
	char user[20];
	setArray();
	printf("WELCOME TP ANOTHER GAME CREATED BY ISHAAN AGGARWAL\n *****RULES*****\n\t1.'*' ARE WORTH ONE POINT\n\t2.'$' GAME OVER\n\t3.USE ARROW KEYS TO NAVIGATE");
	printf("\n\t4.TOUCHING BOUNDRIES GAME OVER\n");
	printf("\n Enter your name please>>>");
	gets(user);
	system("pause");
	system("cls");
	snake(20,1);
	gotoxy(0,0);
	boundry();
	point(&a,&b);
	obs(&g,&h);
	while(1)
	{
			
		if(f=kbhit())
		{
			c=getch();
		}
		if(c==72)
		{
			Sleep(50);
			cp=0;
			co++;
			snake(--y,1);
		}
		else if(c==80)
		{
			Sleep(50);
			cp=0;
			co++;
			snake(++y,1);
		}
		else if(c==75)
		{
			Sleep(15);
			co=0;
			cp++;
			snake(--x,0);
		}	
		else if(c==77)
		{
			Sleep(15);
			co=0;
			cp++;
			snake(++x,0);
		}	
		else if(c=='c')
		{
			system("cls");
			point(&a,&b);
		}
		else if(c==27)
			j=0;
		if(x==a)
		if(y==b)
		{
			printf("\a");
			point(&a,&b);
			ya[len]=ya[len-1];
			xa[len]=xa[len-1];
			score++;
			len++;
			if(len==50)
			{
				system("cls");
				printf("you win");
				system("pause");
			}
			obs(&g,&h);
		}
		if(x==g)
		if(y==h)
			j=0;
		for(i=0;i<100;i++)
		{
			if((y==0||y==41)&&x==i)
			{
				j=0;
				break;
			}
		}
		for(i=0;i<40;i++)
		{
			if((x==0||x==100)&&y==i)
			{
				j=0;
				break;
			}
		}
		if(score>2)
		if((x==50||x==51||x==52)&&(y==20||y==21||y==22))
		j=0;
		if(score>7)
		if((x==40||x==41||x==42)&&(y==10||y==11||y==12))
		j=0;
		if(j==0)
		break;
	}
	system("cls");
	gotoxy(0,0);
	puts(user);
	printf("you have reached the end your score is %d",score);
	scorec(score,user);
	printf("\n\n do you want to view the score log y/n\t");
	scanf("%c",&c);
	if(c=='y'||c=='Y')
	print_file();
	getch();
	return 0;
}
void point(int *p,int *q)
{
	int flag=0;
	while(flag==0)
	{
		l=*p=rnd(99);
		m=*q=rnd(39);
		if(score<3)
		{
			flag=1;
		}
		else
		{
			if((l==50||l==51||l==52)&&(m==20||m==21||m==22))
			{
				flag=0;
			}
			else
			{
				flag=1;
			}
		}
	}
	gotoxy(*p,*q);
	printf("&");
}
void obs3()
{
	int i,j,b=10;
	for(i=0;i<3;i++)
	{
		gotoxy(40,b++);
		for(j=0;j<3;j++)
		printf("*");
	}
}
void obs2()
{
	int i,j,b=20;
	for(i=0;i<3;i++)
	{
		gotoxy(50,b++);
		for(j=0;j<3;j++)
		printf("*");
	}
	if(score>7)
	obs3();
}
void boundry()
{
	int i;
	for(i=0;i<=100;i++)
	printf("-");
	gotoxy(0,1);
	for(i=0;i<39;i++)
	printf("|\n");
	for(i=0;i<=100;i++)
	printf("-");
	for(i=39;i>0;i--)
	{
		gotoxy(100,i);
		printf("|");
	}	
	if(score>2)
	obs2();
	gotoxy(120,20);
	printf("score::::%d",score);
//	printf("time::::%d",elaps());
	
}
void obs(int *p,int *q)
{
		//system("cls");
	u=*p=rnd(90);
	w=*q=rnd(40);
	gotoxy(u,w);
	printf("$");
}
void snake(int pos,int z)
{
	int i,j;
	system("cls");
	boundry();
	gotoxy(l,m);
	printf("&");
	gotoxy(u,w);
	printf("$");
	for(i=0;i<len;i++)
	{
		gotoxy(xa[i],ya[i]);
		printf("*");
	}

	if(z==0)
	{
		for(i=0;i<len;i++)
		{
			xa[i]=xa[i+1];
		}
		xa[len-1]=pos;
		if(cp!=0)
		for(i=0;i<len-cp;i++)
		{
			ya[i]=ya[i+1];
		}
	}
	else
	{
		for(i=0;i<len;i++)
		{
			ya[i]=ya[i+1];
		}
		ya[len-1]=pos;
		if(co!=0)
		for(i=0;i<len-co;i++)
		{
			xa[i]=xa[i+1];
		}
	}
}
void scorec(int sco,char name[20])
{
	FILE *fp;
	fp=fopen("score.dat","a");
	fprintf(fp,"%s\t\t\t",name);
	fprintf(fp,"%d\n",sco);
	fclose(fp);
}
void print_file()
{
	FILE *fp;
	char s[100];
	printf("\n\n");
	fp=fopen("score.dat","r");
	while(fgets(s,79,fp)!=NULL)
	{
		printf("%s",s);
	}
	fclose(fp);
}
void setArray()
{
	for(i=0;i<50;i++)
	{
		xa[i]=0;
		ya[i]=0;
	}
	xa[0]=20;
	xa[1]=21;
	xa[2]=22;
	ya[0]=20;
	ya[1]=20;
	ya[2]=20;
}
