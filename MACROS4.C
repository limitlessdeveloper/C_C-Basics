#include<stdio.h>
#include<conio.h>
#define CONCAT(a,b) a##b

void main(){
 clrscr();
 printf("concat value of 787,459 is %ld",CONCAT(787,459));
 getch();
}