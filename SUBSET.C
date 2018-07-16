 #include<stdio.h>
 #include<conio.h>
 void main(){
 int a[]={0,0,5,0},i,j,k;
 int g=sizeof(a)/sizeof(a[0]);
    // to find the size of an array
 int cnt=0;
 clrscr();
 printf("%d\n",g);
 printf("\n");
 for(i=0;i<g;i++){
       for(j=i;j<g;j++){
	   int total=0;
	  for(k=i;k<=j;k++){
	    total+=a[k];
	    printf("%d",a[k]);
	  }
	  if(total==0){
	     cnt++;
	  }
	  printf("\n");
       }
  }
  printf("the total number of sub-arrays are %d",cnt);
  getch();
 }
