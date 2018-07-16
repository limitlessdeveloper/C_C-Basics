#include<stdio.h>

class A{
public:	
	A(){
		printf("constructor in class A");
	}
	
	void rek();	
};

void A:: rek(){
	printf("method rek inside class A");
}

int main(){
	A ob;
	ob.rek();
}
