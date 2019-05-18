#include"ishaan.h"
void f1(int);
void boundry();
void cf1(int);
void cline(int);
int main()
{
	int a=5,f,i=0,rn[3]={21,41,61},j=1,temp,score=0,speed=150;
	unsigned char c;
	boundry();
	f1(a);
	system("pause");
	while(1)
	{
		if(j==0)
		{
			break;
		}
		if(f==1)
		{
			if(c==77)//right
			{	
				if(a+20<80)
				{
					cf1(a);
					a+=20;
					f1(a);
				}
			}
			else if(c==75)//left	
			{
				if(a-20>0)
				{
					cf1(a);
					a-=20;
					f1(a);
				}	
			}
		}
		for(;i<38;i++)
		{
			f=0;
			if(i+1==33)
			{
				if(inArray(rn,a-4,3))
				{
					j=0;
					break;
				}
			}
			if(kbhit())
			{
				c=getch();
				f=1;
				break;
			}
			if(i+1==38)
			{
				gotoxy(100,4);
				printf("%d",++score);
				i=0;
				cline(rn[0]);
				cline(rn[1]);
				cline(rn[2]);
				if(score%5==1)
				{
					if(score>30)
					{
						speed-=2;
					}
					else if(score>20)
					{
						speed-=12;
					}
					else if(score>10)
					{
						speed=speed-18;
					}
					else
					{
						speed-=22;
						f=0;
					}
					if(speed==10)
					break;
				}
				break;
			}	
			else
			{
				gotoxy(100,5);
				printf("%d",speed);
				Sleep(speed);
				gotoxy(rn[0],i+1);
				printf("********************");
				gotoxy(rn[1],i+1);
				printf("********************");
				gotoxy(rn[2],i+1);
				printf("********************");
			}	
		}
		if(f!=1)
		{
			
			srand(time(NULL));
			temp=rand()%4+1;
			if(temp==1)
			{
				rn[0]=21;
				rn[1]=41;
				rn[2]=61;
			}
			else if(temp==2)
			{
				rn[0]=1;
				rn[1]=41;
				rn[2]=61;
			}
			else if(temp==3)
			{
				rn[0]=01;
				rn[1]=21;
				rn[2]=61;
			}
			else if(temp==4)
			{
				rn[0]=01;
				rn[1]=21;
				rn[2]=41;
			}
		}
		//gotoxy(100,4);
		//printa(rn,3);	
	}
	return 0;
}
void boundry()
{
	int i,j;
	for(i=0;i<40;i++)
	{
		for(j=0;j<=81;j++)
		{
			if(i==0||i==39)
			{
				printf("-");
			}
			else
			{
				if(j==0||j==81)
				{
					printf("|");
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
}
void f1(int a)
{
	gotoxy(a,33);printf("    /\\   ");
	gotoxy(a,34);printf("  @/  \\@  ");
	gotoxy(a,35);printf("  |    |  ");
	gotoxy(a,36);printf(" @\\____/@ ");
	gotoxy(a,37);printf("   /  \\   ");
	gotoxy(a,38);printf("  ^^^^^^  ");
}
void cf1(int a)
{
	int i,b=33,j;
	for(i=0;i<6;i++)
	{
		gotoxy(a,b++);
		for(j=0;j<6;j++)
		printf("  ");
	}
}
void cline(int a)
{
	int i;
	for(i=0;i<38;i++)
	{
		gotoxy(a,i+1);
		printf("                    ");
	}	
}
