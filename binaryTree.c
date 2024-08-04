#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* left;
	struct Node* right;
};
struct Node* newNode(int data){
	struct Node* temp=malloc(sizeof(struct Node));
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
struct Node* root=NULL;
struct Node* insert(struct Node* temp,int d){
	if(temp==NULL){
		temp=newNode(d);
		return temp;
	}
	struct Node* queue[100];
	int front=0;
	int rear=0;
	queue[rear++]=temp;
	while(front!=rear){
		struct Node* h=queue[front++];
		if(h->left==NULL){
			h->left=newNode(d);
			break;
		}else{
			queue[rear++]=h->left;
		}
		
		if(h->right==NULL){
			h->right=newNode(d);
			break;
		}
		else {
			queue[rear++]=h->right;
		}
	}
	return temp;
}
void inorderTraversal(struct Node* root) {
    if (!root)
        return;
    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
}
void main(){
	root=insert(root,10);
	insert(root,1);
	insert(root,11);
	insert(root,12);
	insert(root,13);
	insert(root,14);
	insert(root,15);
	insert(root,16);
	insert(root,17);
	inorderTraversal(root);
}