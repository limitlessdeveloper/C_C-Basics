#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct Node{
	int data;
	struct Node* next;
};

struct Node* head=NULL;
struct Node* push(struct Node* head,int val){									//add node at the begning
	struct Node* node=(struct Node*) malloc (sizeof(struct Node));
	node->data=val;
	node->next=head;
	head=node;
	return head;
}

void print(struct Node* head){													// print all nodes
	struct Node* ptr=head;
	while(ptr!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}	
}

struct Node* swapLL(struct Node* head,int a,int b){								//swapping of 2 numbers
	struct Node* p1=NULL;
	struct Node* c1=head;
	struct Node* p2=NULL;
	struct Node* c2=head;
	struct Node* temp=NULL;
	
	if(head==NULL)
	return head;
	
		p1=c1;
		while(c1!=NULL){
			if(c1->data==a)
			break;
			p1=c1;
			c1=c1->next;
		}
		p2=c2;
		while(c2!=NULL){
			if(c2->data==b)
			break;
			p2=c2;
			c2=c2->next;
		}
		
		
		if(head==c1)
		head=c2;
		temp=c1->next;
		c1->next=c2->next;
		if(temp==c2){
			c2->next=c1;
		}
		else
			c2->next=temp;
		if(p1!=c1)
			p1->next=c2;
		if(p2==c1)
		return head;
		p2->next=c1;
		return head;
		
	
}

struct Node* delete_node(struct Node* head){					//delete node from begning
	struct Node* temp=head;
	if(temp==NULL)
	return head;
	head=temp->next;
	free(temp);
	return head;
}

struct Node* reverse(struct Node* head){						// reverse the linked list
	struct Node* current=head;
	struct Node* prev=NULL;
	struct Node* cn=head;
	
	while(current!=NULL){
		cn = current->next;
		current->next=prev;
		prev = current;
		current= cn;
	}
	head=prev;
	return head;
	
}
struct Node* print_middle(struct Node* head){									//print middle element
	struct Node* mid=head;
	int cnt=1;
	struct Node* curr=head;
	while(curr!=NULL){
		if(cnt & 1){
			mid=mid->next;
		}
		++cnt;
		curr=curr->next; 
	}
	printf("%d ",mid->data);
	return head;
}

int main(){
	head=push(head,1);
	 head=push(head,15);
	 head=push(head,16);
	 head=push(head,81);
	head=push(head,17);
	 print(head);
	 printf("\n");
	 	head=swapLL(head,81,15);
	print(head);
	head=delete_node(head);
	 printf("\n");
	 print(head);
	 head=reverse(head);
	 printf("\n");
	 print(head);
	 printf("\n");
	 head=print_middle(head);
}

