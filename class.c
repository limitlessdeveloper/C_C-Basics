#include<stdio.h>

class A{
	A(){
		printf("inside class A");
	}	
};
void A:: rek(){
	printf("method rek inside class A");
}

int main(){
	A ob=new A();
	ob.rek();
}
