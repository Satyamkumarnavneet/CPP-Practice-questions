#include<iostream>
//#include<graphics>
#include<time.h>
#include<dos.h>
#include<conio.h>
#include<iostream>
#include<conio.h>
#include<dos.h> 
#include<stdlib.h>
#include<windows.h>
#include<time.h>
int main(){
	int gb=DETECT, gm;
	initgraph(&gd, "c:\\TURBOC3\\BG1");
	time_t isTime;
	struct tm *currentTime;
	char ch[100];
	isTime= time(NUll);
	currentTime = localtime(&isTime);
	strftime(ch, 100, "%1: %M: %S, currentTime);
	settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 7);
	outtextxy(100, 100, ch);
	getch();
	
}
