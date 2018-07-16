#include<stdio.h>
#include<conio.h>
void main(){
 typedef enum{false,true}boolean;

 boolean a=false;
 clrscr();
 printf("Printing the enum values %d",a);// prints 0
 printf("print !a",!a);//prints 1

 getch();
}