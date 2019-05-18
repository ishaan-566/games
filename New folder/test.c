#include"ishaan.h"
void main()
{
	int i,j;
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
	getch();
	for(i=1;i<=39;i++)
	{
		for(j=1;j<100;j++)
		{
			gotoxy(j,i);
			printf("@");
		}
	}
	getch();
}
