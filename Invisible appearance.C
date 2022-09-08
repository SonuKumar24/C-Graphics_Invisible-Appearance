#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
 int gd=DETECT,gm;
 int x,y=3,z;
 initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
 x=getmaxx();
 z=getmaxy();

 while(y<x)
 {
  setcolor(RED);
  setfillstyle(1,RED);
  rectangle(1,1,y,z-1);
  floodfill(2,2,RED);
  settextstyle(8,HORIZ_DIR,6);
  setcolor(BLACK);
  outtextxy(160,200,"SONU KUMAR");
  y++;
  delay(1);
 }
 getch();
 closegraph();
}