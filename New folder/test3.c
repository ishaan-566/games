#include"ishaan.h"
void date()
{
	char s[50],Day[1],mon[3],Year[4],Mon[3],date[10];
	time_t t;
	time(&t);
	system("cls");
	strcpy(s,ctime(&t));
	printf("%s\n",s);
	//fflush(stdin);
	Day[0]=s[8];
	Day[1]=s[9];
	Year[0]=s[20];
	Year[1]=s[21];
	Year[2]=s[22];
	Year[3]=s[23];
	mon[0]=s[4];
	mon[1]=s[5];
	mon[2]=s[6];
	printf("%c%c\t%s\t%s",Day[0],Day[1],Year,mon);
	if(strcmp(mon,"Jan")==0)
	strcpy(Mon,"01");
	else if(strcmp(mon,"Feb")==0)
	strcpy(Mon,"02");
	else if(strcmp(mon,"Mar")==0)
	strcpy(Mon,"03");
	else if(strcmp(mon,"Apr")==0)
	strcpy(Mon,"04");
	else if(strcmp(mon,"May")==0)
	strcpy(Mon,"05");
	else if(strcmp(mon,"Jun")==0)
	strcpy(Mon,"06");
	else if(strcmp(mon,"Jul")==0)
	strcpy(Mon,"07");
	else if(strcmp(mon,"Aug")==0)
	strcpy(Mon,"08");
	else if(strcmp(mon,"Sep")==0)
	strcpy(Mon,"09");
	else if(strcmp(mon,"Oct")==0)
	strcpy(Mon,"10");
	else if(strcmp(mon,"Nov")==0)
	strcpy(Mon,"11");
	else if(strcmp(mon,"Dec")==0)
	strcpy(Mon,"12");
	printf("\n%s",Mon);
	date[0]=s[8];
	date[1]=s[9];
	strcat(date,"/");
	strcat(date,Mon);
	strcat(date,"/");
	strcat(date,Year);
	printf("\n%s",date);
}
int main()
{
	char d[10];
	date();
//	printf("%s",d);
	return 0;
}
