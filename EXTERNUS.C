#include<stdio.h>
#include<conio.h>
int x=40;
void main(){
  extern int i;//cannot initialize a extern variable//
  clrscr();
  printf("%d",x);


  getch();


}