#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
#include<graphics.h>
void main(){
  int gd = DETECT, gm;
  int dx,dy,x0,x1,y0,y1,step;
  float xinc,yinc;
  clrscr();
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  printf("Enter (x0,y0) and (x1,y1):");
  scanf("%d%d%d%d",&x0,&y0,&x1,&y1);
  //calculate difference between two end points.
  dx = x1-x0;
  dy = y1-y0;

  //ifdx>dy ?step =|dx| : |dy|;
  if(dx>dy){
   step = abs(dx);
  }else{
   step = abs(dy);
  }
  //calculate increment factor for x and y co-ordinates.
  xinc = dx/(float)step;
  yinc = dy/(float)(step);
  //print initial two points.
  int x = x0;
  int y = y0;
  //iterate through each pixel and print line.
  for(int i=0;i<step;i++){
    putpixel(x,y,WHITE);
    x+=xinc;
    y+=yinc;
    delay(100);
  }
  getch();
  closegraph();



}