#include"ishaan.h"
void display(void);
void game(void);
char b[3][3]={' ',' ',' ',' ',' ',' ',' ',' ',' '},a[3][3]={'1','2','3','4','5','6','7','8','9'};
int main()
{
	
	int i,j,p,k,loc,m,n,win=0,t;
	int an[9]={1,2,3,4,5,6,7,8,9};
	printf("WELCOME TO TIC TAC TOE created by ISHAAN AGGARWAL \n \t\t\t\tenjoy");
	ishaan:
	printf("\n\n\n\nenter choice\n1. vs CPU\n2. vs Player\n3. Exit\nchoice>>>");
	scanf("%d",&t);
	if(t==3)
	return 0;
	for(k=1;k<=9;k++)
	{
		printf("\n");
		system("pause");
		system("cls");
		printf("THIS IS DEMO SCREEN\n\n");
		display();
		printf("\n\n");
		printf("\n\n");
		printf("THIS IS YOUR GAMEPLAY\n\n");
		game();
		p=k%2;
		if(p==0)
		p=2;
		lable:
		if(t==1&&p==2)
		{
			srand(time(0));
			while(an[loc-1]==0)
			loc=rand()%9+1;
			printf("\nCPU turn\n");
		}
		else
		{
			if(t==1)
			printf("\nPLAYER turn\n");
			if(t==2)
			printf("\nPLAYER %d turn\n",p);
			printf("enter location : ");
			scanf("%d",&loc);
			while(an[loc-1]==0)
			{
				printf("\n \a\a\a try again\n");
				scanf("%d",&loc);
			}
		}
		
		switch(loc)
		{
			case 1:m=n=0;break;
			case 2:m=0;n=1;break;
			case 3:m=0;n=2;break;
			case 4:m=1;n=0;break;
			case 5:m=n=1;break;
			case 6:m=1;n=2;break;
			case 7:m=2;n=0;break;
			case 8:m=2;n=1;break;
			case 9:m=n=2;break;
			default:printf("\nwrong choice try again");
					goto lable;
					break;
		}
		if(p==1)
		b[m][n]='X';
		else
		b[m][n]='O';
		a[m][n]=' ';
		an[loc-1]=0;
 		if(b[0][0]=='X'&&b[0][1]=='X'&&b[0][2]=='X')
		{
			system("cls");
			game();
			if(t==1)
				printf("\nplayer wins");
			else
				if(t==2)
					printf("\nplayer 1 win");
			break;
		}
		if(b[1][0]=='X'&&b[1][1]=='X'&&b[1][2]=='X')
		{
			system("cls");
			game();
			if(t==1)
				printf("\nplayer wins");
			else
				if(t==2)
					printf("\nplayer 1 win");
			break;
		}
		if(b[2][0]=='X'&&b[2][1]=='X'&&b[2][2]=='X')
		{
			system("cls");
			game();
			if(t==1)
				printf("\nplayer wins");
			else
				if(t==2)
					printf("\nplayer 1 win");
			break;
		}
		if(b[0][0]=='O'&&b[0][1]=='O'&&b[0][2]=='O')
		{
			system("cls");
			game();
			if(t==1)
				printf("\ncpu wins");
			else
				if(t==2)
					printf("\nplayer 2 win");
			break;
		}
		if(b[1][0]=='O'&&b[1][1]=='O'&&b[1][2]=='O')
		{
			system("cls");
			game();
			if(t==1)
				printf("\ncpu wins");
			else
				if(t==2)
					printf("\nplayer 2 win");
			break;
		}
		if(b[2][0]=='O'&&b[2][1]=='O'&&b[2][2]=='O')
		{
			system("cls");
			game();
			if(t==1)
				printf("\ncpu wins");
			else
				if(t==2)
					printf("\nplayer 2 win");
			break;
		}
		
		if(b[0][0]=='X'&&b[1][0]=='X'&&b[2][0]=='X')
		{
			system("cls");
			game();
			if(t==1)
				printf("\nplayer wins");
			else
				if(t==2)
					printf("\nplayer 1 win");
			break;
		}
		if(b[0][1]=='X'&&b[1][1]=='X'&&b[2][1]=='X')
		{
			system("cls");
			game();
			if(t==1)
				printf("\nplayer wins");
			else
				if(t==2)
					printf("\nplayer 1 win");
			break;
		}
		if(b[0][2]=='X'&&b[1][2]=='X'&&b[2][2]=='X')
		{
			system("cls");
			game();
			if(t==1)
				printf("\nplayer wins");
			else
				if(t==2)
					printf("\nplayer 1 win");
			break;
		}
		if(b[0][0]=='O'&&b[1][0]=='O'&&b[2][0]=='O')
		{
			system("cls");
			game();
			if(t==1)
				printf("\ncpu wins");
			else
				if(t==2)
					printf("\nplayer 2 win");
			break;
		}
		if(b[0][1]=='O'&&b[1][1]=='O'&&b[2][1]=='O')
		{
			system("cls");
			game();
			if(t==1)
				printf("\ncpu wins");
			else
				if(t==2)
					printf("\nplayer 2 win");
			break;
		}
		if(b[0][2]=='O'&&b[1][2]=='O'&&b[2][2]=='O')
		{
			system("cls");
			game();
			if(t==1)
				printf("\ncpu wins");
			else
				if(t==2)
					printf("\nplayer 2 win");
			break;
		}
		if(b[0][0]=='X'&&b[1][1]=='X'&&b[2][2]=='X')
		{
			system("cls");
			game();
			if(t==1)
				printf("\nplayer wins");
			else
				if(t==2)
					printf("\nplayer 1 win");
			break;
		}
		if(b[0][0]=='O'&&b[1][1]=='O'&&b[2][2]=='O')
		{
			system("cls");
			game();
			if(t==1)
				printf("\ncpu wins");
			else
				if(t==2)
					printf("\nplayer 2 win");
			break;
		}
		if(b[0][2]=='X'&&b[1][1]=='X'&&b[2][0]=='X')
		{
			system("cls");
			game();
			if(t==1)
				printf("\nplayer wins");
			else
				if(t==2)
					printf("\nplayer 1 win");
			break;
		}
		if(b[0][2]=='O'&&b[1][1]=='O'&&b[2][0]=='O')
		{
			system("cls");
			game();
			if(t==1)
				printf("\ncpu wins");
			else
				if(t==2)
					printf("\nplayer 2 win");
			break;
		}
	}
	if(k>9)
	{
		printf("draw");
		fflush(stdin);
		system("pause");
	}
	getch();
	return 0;
}
void display(void)
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(j!=2)
			printf("   %c|",a[i][j]);	
			else
			printf("   %c",a[i][j]);		 
		}
		if(i!=2)
		printf("\n ---------------\n");
	}
}
void game(void)
{
	int i,j,n;
	printf("\n\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(j!=2)
			printf("   %c|",b[i][j]);	
			else
			printf("   %c",b[i][j]);		
		}
		if(i!=2)
		printf("\n ---------------\n");
	}
}
