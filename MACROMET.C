#include<stdio.h>
#include<conio.h>
#define areasquare(a)(a*a)
int areasquare(int s);  // won't compile as it not letting it override//
int areasquare(int s){
   int c=s*s;
   return c;
}
void main(){
 int a=4;
 clrscr();
 printf("area %d",areasquare(a));
 getch();
}

