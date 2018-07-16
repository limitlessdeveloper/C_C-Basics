#include<stdio.h>
#include<conio.h>
struct aa{
 int ad;
};

struct g{
 int a;
 char r;
 struct aa var;        //when we place 'g' at the place of 'aa' this will show the invalid decleration of 'g'
		       //because structure cannot create their object within themselves
		       //and we can create a pointer variable of the structure as '*var'
};
void main(){
struct g ob;
ob.a=10;
ob.r='h';
clrscr();
getch();

}