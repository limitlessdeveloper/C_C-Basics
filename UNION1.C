#include<stdio.h>
union test{
 int x,y;
}t;
int main(){
   // union test t;
    t.x=2;    // t.y is also updated to 2
    clrscr();
    printf("After making x=2: x=%d, y=%d\n\n",t.x,t.y);

    t.y=10;// t.x is also updated to 10
    printf("after making t.y=10 x=%d , y=%d \n \n",t.x,t.y);

    getch();
 return 0;
}