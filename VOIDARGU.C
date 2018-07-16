#include<stdio.h>
void fun(void){
printf("from function");
}

void main(){
	clrscr();
	fun();          //if void is given then there should be no parameter passed in a function calling.
	getch();
}