#include<stdio.h>
#include<conio.h>
void main(){
 int fun(int);
 int a;
 clrscr();
 a=fun;d
  //insted of(  fun(int)  )
  //if the (fun) alone will call the function then the no a value will return only garbage calue will print .
  //the function defination will not execute then.
 printf("\n%d",a);
 getch();
}
int fun(int a){
 printf("compiler inside the function fun");
 return a;
}