#include<stdio.h>
#include<conio.h>


int inline squart(int x){ return x*x;}
void main(){
 int a=7;
 clrscr();
 printf("%ld\n",squart(a));
 printf("file name d= %s\n",__FILE__);
 printf("date %s\n",__DATE__);
 printf("time %s\n",__TIME__);
 printf("number of lines %d",__LINE__);
 getch();
}