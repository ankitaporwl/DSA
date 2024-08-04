//double linked list without end pointer
#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *prev;
	struct Node *next;
};
struct Node *start=NULL;
void showAll();
void showAll2();
void insertAtB(int x);
void insertAtE(int x);
void insertAtSP(int p,int x);
void deleteAtE();
void deleteAtB();
void deleteAtSP(int p);
int countNode();
int search(int x);
void main(){
	insertAtE(10);
	insertAtE(20);
	insertAtE(30);
	insertAtE(40);
	showAll();
	printf("--------\n");
	//deleteAtE();
	insertAtSP(2,50);
	showAll();
	printf("--------\n");
	deleteAtSP(2);
	showAll();
	printf("--------\n");
	printf("%d\n",search(40));
	//deleteAtB();
	//deleteAtB();
	//showAll();
	//printf("%d\n",countNode());
	//showAll2();
}
void insertAtB(int x){
	struct Node *temp=malloc(sizeof(struct Node));
	if(temp==NULL){
		printf("NO space\n");
		return;
	}
	temp->data=x;
	temp->prev=NULL;
	temp->next=start;
	if(start!=NULL){
		start->prev=temp;
	}
	start=temp;
}
void insertAtE(int x){
	if(start==NULL){
		insertAtB(x);
		return;
	}
	struct Node *temp=malloc(sizeof(struct Node));
	if(temp==NULL){
		printf("NO space\n");
		return;
	}
	struct Node *temp1=start;
	while(temp1->next!=NULL){
		temp1=temp1->next;
	}
	temp->data=x;
	temp->next=NULL;
	temp1->next=temp;
	temp->prev=temp1;
}
void insertAtSP(int p,int x){
	int n=countNode();
	if(p<=1){
		insertAtB(x);
		return;
	}
	if(p>countNode()){
		insertAtE(x);
		return;
	}
	int i;
	struct Node *temp1=start;
	for(i=1;i<p-1;i++){
		temp1=temp1->next;
	}
	struct Node *temp=malloc(sizeof(struct Node));
	if(temp==NULL){
		printf("No Space\n");
		return;
	}
	temp->data=x;
	temp->next=temp1->next;
	temp->prev=temp1;
	temp->next->prev=temp;
	temp1->next=temp;
}
void deleteAtB(){
	if(start==NULL){
		printf("list is empty\n");
		return;
	}
	struct Node *temp=start;
	start=temp->next;
	temp->next->prev=start;
	free(temp);
}
void deleteAtE(){
	int n=countNode();
	if(n<=1){
		free(start);
		start=NULL;
		return;
	}
	struct Node *temp=start;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->prev->next=NULL;
	free(temp);
}
void deleteAtSP(int p){
	int n=countNode();
	if(p<=1){
		deleteAtB();
		return;
	}
	if(p>=n){
		deleteAtE();
		return;
	}
	int i;
	struct Node *temp=start;
	for(i=1;i<p-1;i++){
		temp=temp->next;
	}
	temp->next=temp->next->next;
	free(temp->next->prev);
	temp->next->prev=temp;
}
void showAll(){
	if(start==NULL){
		printf("list is empty");
		return;
	}
	struct Node *temp=start;
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
void showAll2(){
	if(start==NULL){
		printf("List is empty\n");
		return;
	}
	struct Node *temp=start;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->prev;
	}
}
int countNode(){
	if(start==NULL){
		return 0;
	}
	struct Node *temp=start;
	int c=0;
	while(temp!=NULL){
		c++;
		temp=temp->next;
	}
	return c;
}
int search(int x){
	if(start==NULL){
		return -1;
	}
	int i=-1;
	struct Node *temp=start;
	while(temp->next!=NULL){
		i++;
		if(temp->data==x){
			return i;
		}
		temp=temp->next;
	}
	return -1;
}
