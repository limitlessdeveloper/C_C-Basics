#include<stdio.h>
#include<conio.h>
int x=40;
void main(){
 int x=20;
 clrscr();
 printf("%d",x); // always local variable get priority whenever( Globle Vs Local )
 getch();
}