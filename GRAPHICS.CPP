#include<dos.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
  int gd = DETECT, gm;
  clrscr();
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  circle(250,250,100);
  
  //Draw triangle
  line(300,100,200,200);
  line(300,100,400,200);
  line(200,200,400,200);
  
  //draw ellipse.
  ellipse(150,120,0,360,70,50);
  getch();
  closegraph();

}
