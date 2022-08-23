/*----------------
case 3:  Line with negative
	 slope greater than 1
------------------*/
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
#include<graphics.h>
void main(){
  int x0,y0,x1,y1,dx,dy,p,x,y;
  int gd = DETECT, gm;
  clrscr();
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  printf("Enter two end point(x0,y0) and (x1,y1)");
  scanf("%d%d%d%d",&x0,&y0,&x1,&y1);

  x = x0;
  y = y0;

  putpixel(x,y,WHITE);
  //initial dicision parameter
  dx = abs(x1-x0);
  dy =abs(y1-y0);
  p = 2*abs(dx)-abs(dy);
  for(int i=0;i<abs(dy);i++){
    if(p<0){
       x=x;
       y+=1;
       putpixel(x,y,WHITE);
       delay(40);
       p+=2*abs(dx);
    }else{
      x-=1;
      y+=1;
      putpixel(x,y,RED);
      delay(100);
      p+=2*abs(dx)-2*abs(dy);
    }
  }
  getch();
  closegraph();
}
