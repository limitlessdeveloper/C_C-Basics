#include<stdio.h>
#include<conio.h>
void main(){
 int n,g,i,k,h,d;
 clrscr();
 scanf("%d",n);
 g=2*n-1;
 for(i=0;i<g;i++){
	 if(i>0){
		  for(k=0;k<i;k++){
			printf("%d",(n-k));
		   }
	  }
	 for(h=0;h<(g-i);h++){
		printf("%d",n-1);
	  }
	 if(i>0){
		 for(d=0;d<i;d++){
	    printf("%d",(((n-i)+1)+d));
		 }
	 }
	 printf("\n");
	 if(i==n-1)break;
 }
 getch();
}