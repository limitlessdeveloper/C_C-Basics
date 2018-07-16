#include<stdio.h>
#include<conio.h>
void main(){
 union rek{
  int i;
  char a[2];
 };
 union rek o;
 clrscr();
 o.a[0]=3;
 o.a[1]=2;
 printf("%d %d %d ",o.a[0],o.a[1],o.i);
 getch();
}