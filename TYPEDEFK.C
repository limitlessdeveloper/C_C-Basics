#include<stdio.h>
#include<conio.h>
void main(){
 typedef long rek;         // it will convert the data type name into user define data type name.
 rek a;
 rek b;
 long long int r;
 clrscr();
 printf("%d %d %d ",sizeof(a),sizeof(b),sizeof(r));
 getch();
}