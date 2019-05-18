#include"ishaan.h"
int main()
{
	printf("Welcome to the series of games created By ISHAAN AGGARWAL.\nThrough this interface you are able to play various classis games developed in c.\nYou can play now Thanks");
	FILE *fp;
	int ch;
	while(1)
	{
		printf("\nenter your choice\n\n");
		fp=fopen("file.txt","r");
		while(!feof(fp))
		{
			putchar(getc(fp));
		}
		printf("\b0.\tExit");
		printf("\n--->>>");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:	system("start block.exe");break;
			case 2:	system("start hanoi.exe");break;
			case 3:	system("start jackpot.exe");break;
			case 4: system("start snake.exe");break;
			case 5: system("start TicTakToe.exe");break;
			case 0: return 0;
		}
		system("cls");
	}
}
