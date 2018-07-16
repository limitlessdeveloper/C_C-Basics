#include<stdio.h>
int main(){
	
	int a[]={5,1,2,345,6,78,9};
	int *r=a;
	int **t=&r;
	//int **p=&r;
	printf("%d %d %d",*r,t,a);
}
