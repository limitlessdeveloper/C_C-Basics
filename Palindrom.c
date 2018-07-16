#include<stdio.h>
#include<stdio.h>
int main(){
	char arr[50];
	int i=0,l;
	fgets(arr,50,stdin);
	l=strlen(arr)-2;
	printf("%d\n",l);
	for(i=0;i<=l/2;i++){
		if(arr[i]!=arr[l-i]){
			printf("%d %d\n",i, (l-i-1));
			printf("not a palindrom");
		 return 0;
		}
	}
	printf("palindrome");
}  
