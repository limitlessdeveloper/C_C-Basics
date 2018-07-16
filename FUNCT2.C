#include<stdio.h>
#include<conio.h>
void main(){
 int fun();
 int (*p)()=fun;// only like this the function will call
 clrscr();
  (*p)();
 getch();
}
int fun(){
 printf("inside from the function") ;
 return ;
}