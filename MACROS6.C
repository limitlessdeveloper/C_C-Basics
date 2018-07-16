#include<stdio.h>
#include<conio.h>
# define print(i,item) while(i<item)\
			{ \
				printf("%d\n",i++);\
			}\

void main(){
 int i=0;
 clrscr();
 print(i,4);
 getch();

}