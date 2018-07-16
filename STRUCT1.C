#include<stdio.h>
#include<conio.h>
struct test{
 char a[2];
 int x;

};

void main(){
  struct test t;
  int a=2;
  clrscr();
  t.x=a;
  printf("%d",t.x);
// printf("%d",t.a);
  getch();

}