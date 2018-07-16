#include<stdio.h>
#include<stdio.h>
#include<malloc.h>
int main(){
	int m=2,n=2,a=2,b=2,sum=0,i,j,k;
	int arr[][2]={{1,2},{3,4}};
	int rek[][2]={{7,8},{8,9}};
	int res[2][2];
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			sum=0;
			for(k=0;k<2;k++){
				sum+=arr[i][k]*rek[k][j];
			}
			res[i][j]=sum;
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",res[i][j]);
		}
		printf("\n");
	}
}