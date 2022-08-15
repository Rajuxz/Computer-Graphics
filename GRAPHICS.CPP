#include<dos.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
  int gd = DETECT, gm;
  clrscr();
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  circle(250,250,100);
  circle(255,255,100);
  circle(260,260,100);
  circle(265,265,100);
  circle(270,270,100);
  getch();
  closegraph();

}