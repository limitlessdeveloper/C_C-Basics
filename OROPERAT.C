#include<stdio.h>
#include<conio.h>
void main(){
   int a=-4,c=0,b=0,k,l;
   k=a||c&&b;
   l=!a||c||b; // or operator gives
   clrscr();
   printf("a=%d",!a);// not of any pos and neg is zero//
   printf("k=%d\n",k);
   printf("l=%d\n",l);
   getch();
}