#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
struct Node* insertIN(struct Node*,int);
struct Node* insert(struct Node*,int);
struct Node* Union(struct Node*,struct Node*);
struct Node* InterSection(struct Node*,struct Node*);
void traverse(struct Node*);
struct Node{
 int data;
 struct Node *next;
};

struct Node* newNode(int data){
	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data =data;
	newNode->next=NULL;
	return newNode;
}
 void main(){
	struct Node* h1=NULL;
    struct Node* h2=NULL;
	int n1,n2,i,t;
	clrscr();
	cin>>n1;
	for(i=0;i<n1;i++){
		cin>>t;
	       h1=insert(h1,t);

	}
      //traverse(h1);
	cin>>n2;
	for(i=0;i<n2;i++){
	   cin>>t;
	   h2=insert(h2,t);
	}
	//traverse(h2);
    struct Node* r= Union(h1,h2);
    traverse(r);
     cout<<"\n";
     struct Node* s=InterSection(h1,h2);
     traverse(s);
	getch();

}
struct Node* Union(struct Node* h1,struct Node* h2){
  struct Node* p1=h1;
  struct Node* p2=h2;
  struct Node* h3=NULL;
  while(p1!=NULL){
    h3=insert(h3,p1->data);
    p1=p1->next;
   }
   while(p2!=NULL){
    h3=insert(h3,p2->data);
    p2=p2->next;
   }


    return h3;
}
struct Node* InterSection(struct Node* h1,struct Node* h2){
   int t1=0,a[10],b[10],i,j,f1=0,f2=0;
   struct Node* p1=h1;
   struct Node* p2=h2;
   struct Node* h3=NULL;
   while(p1!=NULL){
     a[f1++]=p1->data;
     p1=p1->next;
   }
   while(p2!=NULL){
    b[f2++]=p2->data;
    p2=p2->next;
   }

   for(i=0;i<f1;i++){
    for(j=0;j<f2;j++){
     if(a[i]==b[j]){
       h3=insert(h3,b[j]);
     }
    }
   }


  return h3;
}
struct Node* insert(struct Node* h,int d){
	h=insertIN(h,d);
	return h;
}
struct Node* insertIN(struct Node* h,int d ){
	if(h==NULL){
		h=newNode(d);
		return h;
	}
	h->next=insertIN(h->next,d);

	return h;
}
void traverse(struct Node* h){
	if(h!=NULL){
		cout<<h->data<<" ";
		traverse(h->next);
	}
}