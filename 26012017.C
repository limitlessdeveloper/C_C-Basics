#include<stdio.h>
#include<conio.h>
void main(){
  char *ptr="geek";
  int a=22;
  clrscr();
  printf("&ptr = %s\n",&ptr);
  printf("ptr = %s\n",ptr);
  printf("*ptr =%s\n",*ptr);
  printf("&a = %d\n",&a);
  printf("a = %d\n",a);
			    // printf("*a =%d\n",*a);

  getch();
}