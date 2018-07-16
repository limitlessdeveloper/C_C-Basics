#include<stdio.h>
#include<conio.h>
struct test{
  int a;
  float b;
  char c;
  long float f;
  long double h;
  long int i;
}ob;

void main(){
  clrscr();
  printf("default size of int %d\ndefault size of float %d\ndefault size of char %d\ndefault size of long float %d\ndefault size of long double %d\ndefault size of long int %d\n",sizeof(ob.a),sizeof(ob.b),sizeof(ob.c),sizeof(ob.f),sizeof(ob.h),sizeof(ob.i));
  getch();
}