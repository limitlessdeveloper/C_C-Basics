#include<stdio.h>
#include<conio.h>
#include<string.h>

void printFirst(char *a,char c){
  int t=strlen(a),i=0,e=1;
  printf("%d",t);
  while(e){
	 for(i=0;i<t;i++){
   //		 printf("%c",a[i]);
		 if(a[i]==c){
			if(a[i+1]=='='){
			       if((a[i+2]>=65)&&(a[i+2]<=90)){
					printFirst(&a,a[i+2]);
			       }
			       else{
					printf("%c",a[i+2]);
					i=i+2;
					while((a[i]!=32)&&(i!=(t-1))){

						 if(a[i]=='/'){
						   if((a[i+1]>=65)&&(a[i+1]<=90)){
							  //  printf("%c %s",a[i+1],a);
							    printFirst(&a,a[i+1]);
						   }
						   else{
							    printf("%c",a[i+1]);
							    e=0;
							    i=t-1;
							    break;
						   }
						 }
						 i++;
					}
					if(i==(t-1)){
					 i=t-1;
					 break;
					}
			       }
		      }
	    }

	}
	if(e==0 || i==(t-1)) break;
   }
}

void main(){
 char car[100];
 char c;
 clrscr();
 gets(car);
 printf("enter the character\n");
 scanf("%c",&c);
 printFirst(&car,c);
 getch();
}