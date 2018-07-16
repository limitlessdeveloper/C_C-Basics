#include<stdio.h>
#include<conio.h>
#define INCREMENT(x) ++x
void main(){
 int a=2;
 char *ptr="saf";
 clrscr();
 printf("the increment is %d\n",INCREMENT(a));
 printf("the increment is %s",INCREMENT(ptr));
 getch();


}