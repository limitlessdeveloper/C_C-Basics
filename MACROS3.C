#include<stdio.h>
#include<conio.h>
void main(){

 int r=2,*a;
 clrscr();
 a=&r;
 printf("a=%d\n",a);
 printf("*a=%d",*a);
 getch();
}