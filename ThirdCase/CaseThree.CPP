//Case 3: Line with negative slope less than or equal to 1.
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
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
  dx =abs(x1-x0);
  dy =abs(y1-y0);
  p = 2*(dy) -(dx);
  for(int i=0;i<dx;i++){
    if(p<0){
       x-=1;
       y=y;
       putpixel(x,y,WHITE);
       delay(100);
       p+=2*abs(dy);
    }else{
      x-=1;
      y+=1;
      putpixel(x,y,RED);
      delay(100);
      p+=2*abs(dy)-2*abs(dx);
    }
  }
  getch();
  closegraph();
}
