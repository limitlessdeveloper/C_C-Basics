#include<stdio.h>
int main(int argc, char **argv){
	printf("%d",argc);
	if(argc>=1){
		//printf("%s",argv[0]);
		printf("%s",argv[1]);
	}
}
