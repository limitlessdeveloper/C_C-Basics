#include <iostream>
using namespace std;
#define MAX 2
class stack{
    
    int top;
    int arr[MAX];
    
    public: stack(){
        top=-1;
    }
    
    public: void push(int n){
        cout<<top<<" ";
        if(top==MAX-1)
        {    cout<<"\ndurex\n";
             return;  
        }
        arr[++top]=n;
    }
    
    public: void pop(){
        if(top==-1)
        {
            cout<<"\nmenforce\n";
            return;
        }
         top--;
    }
    
    public: void empty(){
        if(top==-1)
        cout<<"empty stack";
    }
    
    public :int peek(){
        return arr[top];
    }
    public: void print(){
        
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
        }
    }
};
int main() {
	struct stack r;
	r.push(5);
	r.push(7);
	r.push(9);
	r.print();
	r.pop();
	r.empty();
	cout<<"\n";
	r.print();
	return 0;
}