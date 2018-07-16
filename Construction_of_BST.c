
#include <stdio.h>
#include<malloc.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* root=NULL;

struct Node* insertion(struct Node* node,int value){
        struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
        struct Node *root=node;
            temp->data=value;
            temp->left=temp->right=NULL;
        if(root==NULL){
		   root=temp;
		  // printf("%d ",root->data);
           return root;
        }
        else{
			    while(1){
			            if(root->data>=value){
			             	if(root->left==NULL){
							 	root->left=temp;
							 	//	printf("%d\n",temp->data);
								 return root;
							 }
						    else{
						    	root=root->left;
							}
			            }
			            else{
			            	if(root->right==NULL){
								root->right=temp;
							//	printf("%d\n",temp->data);
								return root;
							}
							else{
								root=root->right;
							}
			            }
			        }
        }
       // return root;
}

void inorder(struct Node* root){
    if(root!=NULL){
        inorder(root->left); 
        printf("%d ",root->data);
		inorder(root->right);
    }
}

void preorder(struct Node* root){
    if(root!=NULL){
    	printf("%d ",root->data);
        preorder(root->left); 
        preorder(root->right);
    }
}

void postorder(struct Node* root){
    if(root!=NULL){
    	
        postorder(root->left); 
        postorder(root->right);
        printf("%d ",root->data);
    }
}


int main() {
    root=insertion(root,4);
    root=insertion(root,8);
    root=insertion(root,3);
    printf("inorder\n");
    inorder(root);
    printf("\npreorder\n");
	preorder(root);
	printf("\npostorder\n");
	postorder(root);
	return 0;
}