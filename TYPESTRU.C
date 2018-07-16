#include<stdio.h>
#include<conio.h>
typedef struct {
 int x,y;

}xy;
void main(){
  xy t;
  t.x=2;
  t.y=22;
  clrscr();
  printf("x=%d \n y=%d",t.x,t.y);
  getch();

}
