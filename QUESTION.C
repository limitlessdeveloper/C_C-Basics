#include<stdio.h>
#include<conio.h>
int main(){
    extern int fun(float);
    int a;
    clrscr();
     a=fun(3.14);
    printf("%d\n",a);
   getch();

 return 0;
}

int fun(float a){
 return ++a;

}