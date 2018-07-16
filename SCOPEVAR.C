#include<stdio.h>
#include<conio.h>
int main(){
    int x=40;
    {
     int x=20 ;
     clrscr();
     printf("x=%d ",x);// will inherit 20 coz of scope//

    }
    printf(" \n outer x=%d",x);// will print40
    getch();

return 0;
}