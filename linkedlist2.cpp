#include<iostream>
#include<conio.h>

struct Node{
 int data;
 Node *next;
};

Node *newNode(int d){
   Node *newNode= new Node;
   newNode->data=d;
   newNode->next=NULL;
   return newNode;
}
int main(){
  Node *h= NULL;
  insert(h,1);
  insert(h,2);
  insert(h,3);
  insert(h,4);
  insert(h,5);

  cout<<"Traversal\n"<<traversal(h);
 return 0;
}
Node insert(Node* head,int d){
      if(head==NULL){
       return newNode(d);
      }else{
       head->next=insert(head->next,d);
      }
      return head;
}
void traversal(Node *head){
 if(head!=NULL){
  printf("%d  ",head->data);
  traversal(head->next);
 }
}