#include<stdio.h>
#include<conio.h>
int main(){
 struct value{          //when an structure is partially initialized
			//the remaining structure is initialized by 0 or null;
   char name[20];
   int age;
   float sal;
 };
 struct value e={5,50.0}; //if the first attribute is not initialized during object creation....the rest structure dosen't take any value at the initilization of the objct.
 clrscr();
 printf("%d %f",e.age,e.sal);
 getch();
}