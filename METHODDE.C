#include<stdio.h>
#include<conio.h>
void  fun ();
int main(){
  void (*p)()=fun;
  clrscr();
  (*p)();
// fun();
  getch();
   return 0;
}
void fun(){
    printf("this is here");
   // return 0;
}