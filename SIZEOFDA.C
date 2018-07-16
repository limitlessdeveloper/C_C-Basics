#include<stdio.h>
#include<conio.h>
struct test{
  int a;
  float b;
  char c;
  long float f;
  long double h;
  long int i;
  char *r;
  int *y;
  float *l;
  long *g;
  long float *k;
  long double *ld;
  long int *t;
}ob;

void main(){
  clrscr();
  printf("default size of int %d\ndefault size of float %d\ndefault size of char %d\ndefault size of long float %d\ndefault size of long double %d\ndefault size of long int %d\n",sizeof(ob.a),sizeof(ob.b),sizeof(ob.c),sizeof(ob.f),sizeof(ob.h),sizeof(ob.i));
  printf("default pointer size of int %d\ndefault pointer size of float %d\ndefault pointer size of char %d\ndefault pointer size of long %d\ndefault  pointer size of long float %d\ndefault pointer size of long double %d\ndefault pointer size of long int %d\n",sizeof(ob.y),sizeof(ob.l),sizeof(ob.r),sizeof(ob.k),sizeof(ob.ld),
  sizeof(ob.t));
  getch();
}