#include <stdio.h>
#include <windows.h>
int main()

{
	int h,m,s;
	int d =1000; //delay 1000 milliseconds we use it in sleep function
	printf("Set time: \n");
	scanf("%d%d%d",&h,&m,&s); // hours,minutes and seconds
	if(h>12 || m>60 || s>60)
	{
		printf("ERROR ! \n");
		exit(0);
	}
	while(1) //infinite loop
	{
		s++;
		if(s==60)
		{
			m++;
			s=0;
		}
		if(m==60)
		{
			h++;
			m=0;
		}
		if(h>12)
		{
			h=1;
		}
		printf("\n Clock: ");
		printf(" %02d:%02d:%02d",h,m,s); //writes time in this format 00:00:00
		Sleep(d); //sleep function slows down while loop like real clock
		system("cls"); //this clears the screen
	}
}