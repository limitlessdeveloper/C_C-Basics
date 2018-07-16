#include<stdio.h>
#include<conio.h>

void main(){

 typedef enum{false,true}boolean; //here boolean is a typedef datatype having 2 values true =1,false =0;
 boolean error=false;
 clrscr();
 printf("%d %d",error,sizeof(error));//size of the enum is also 2.
 getch();

}