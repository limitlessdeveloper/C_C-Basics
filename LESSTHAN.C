#include<stdio.h>
#include<conio.h>
void main(){
 int x=10,y=20,z=5,i;
 clrscr();
 i=x<y<z;//(x<y ko 1 assign so now 1<z) // would print 0 or 1 // 0 for false and 1 for true//
 printf("%d",i);

 getch();

}