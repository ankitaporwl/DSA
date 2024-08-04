//stack using linked list
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *top=NULL;
bool isEmpty(){
	if(top==NULL) return true;
	return false;
}
void push(int x){
	struct Node *temp=malloc(sizeof(struct Node));
	if(temp==NULL){
		printf("No Space\n");
		return;
	}
	temp->data=x;
	temp->next=top;
	top=temp;
}
int pop(){
	if(top==NULL){
		printf("stack is empty\n");
		return -1;
	}
	struct Node *temp=top;
	int x=temp->data;
	top=temp->next;
	temp->next=NULL;
	free(temp);
	return x;
}
int peek(){
	if(top==NULL){
		printf("stack is Empty\n");
		return -1;
	}
	return top->data;
}
void main(){
push(40);	
push(30);	
push(20);	
push(10);
printf("%d\n",peek());	
printf("%d\n",peek());	
printf("%d\n",pop());
printf("%d\n",pop());
printf("%d\n",pop());
}
