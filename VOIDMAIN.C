#include<stdio.h>
#include<conio.h>
void main(void){
 static int i=5;
 clrscr();
 if(--i){
   printf("%d",i);
 }
 getch();
}