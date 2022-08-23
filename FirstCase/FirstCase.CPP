#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>
int dx,dy,x0,x1,y0,y1,p;
void main(){
 int gd = DETECT, gm;
 int x,y;
 clrscr();
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 printf("Enter value for (x0,y0) and (x1,y1)");
 scanf("%d%d%d%d",&x0,&y0,&x1,&y1);
 x=x0;
 y=y0;
 putpixel(x,y,WHITE);
 dx = x1-x0;
 dy = y1-y0;

 //initial decision parameter p
 p = 2*dy - dx;
 for(int i=0;i<dx;i++){
  if(p<0){
     x++;
     y = y;
     putpixel(x,y,WHITE);
     delay(300);
     p+=2*dy;
  }else{
     x++;
     y++;
     putpixel(x,y,WHITE);
     delay(300);
     p+=2*dy-2*dx;
  }

 }
 closegraph();
 getch();

}
