#include<stdio.h>
#include<conio.h>

 struct rek{
 int age;
 char name[20];
 };

//struct rek=son

typedef struct rek son;

 //it will convert the hole structure name into (son).

void main(){
     son r={2,"Rekhit"}; //character should be written in ("") in C.
     clrscr();
     printf("%d %s",r.age,r.name);
     getch();
}