#include<stdio.h>
#include<conio.h>
void main(){
  int fun();
  int a;
  clrscr();
  a=fun;     //insted of fun(); //int this case the function will call but it will not return or execute its defination.
  printf("%d",a);     // the ("a") will print the garbage value here
  getch();
}
int fun(){
 printf("inside the function");
 return 0;
}