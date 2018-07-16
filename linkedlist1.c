#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
struct Node *insert(struct Node*,int);
void traversal(struct Node*);
struct Node{
 int data;
 struct Node *next;
};
struct Node *h= NULL;
struct Node *newNode(int d){
	struct  Node *newNode=(struct Node *)malloc(sizeof(struct Node));
   newNode->data=d;
   newNode->next=NULL;
   return newNode;
}
int main(){
  h=insert(h,1);
  h=insert(h,2);
  h=insert(h,3);
  h=insert(h,4);
  h=insert(h,5);
  printf("The Traversals\n ");
  traversal(h);
 return 0;
}
 struct Node *insert(struct Node* head,int d){
	  if(head==NULL){	
	  	head=newNode(d);
        return head;
      }
       struct Node* ptr=head;
       while(ptr!=NULL){
       	if(ptr->next==NULL){
       		ptr->next=newNode(d);
       		break;
		   }
		   ptr=ptr->next;
	   }
      return head;
}
void traversal(struct Node *s){
 if(s!=NULL){	
  printf("%d ",s->data);
  traversal(s->next);
 }
}