//WE CAN DO IT BY USING DOS SHELL
//WHEN WE PASS AN ARGUMENT THAT ARGUMENT GOES INTO THE CHARACTER ARRAY(ARGV)
//THAT ARRAY CONTAIN ARGUMENTS ON THERE INDEX POSITION AS (LIKE REKHIT GUPTA)
//SO...   ARGV[1]='REKHIT' AND ARGV[2]='GUPTA'
// ARGV[0] ALWAYS STORE THE NAME OF THE PROGRAM

#include<stdio.h>
#include<conio.h>
void main(int argc,char** argv){
	clrscr();
	if(argc>2){
	 printf("the argumet supplied is %s\n",argv[0]);
	 printf("the argumet supplied is %s\n",argv[1]);
	 printf("the argumet supplied is %s\n",argv[2]);
	 }
	else if(argc>=2)
	 printf("too many argument supplied.\n");
	else
	printf("one argument expexted.\n");
	getch();
}