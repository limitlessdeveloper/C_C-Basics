#include<stdio.h>
#include<conio.h>
union test{
 int x;
 char ch[2];
};
int main(){
     union test t;
     t.ch[0]=' ';
     t.ch[1]=' ';
     clrscr();
     printf("ch[0]=%d, ch[1]=%d,x=%d",t.ch[0],t.ch[1],t.x);

     getch();
 return 0;
}