//singly linked list
#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
int i=0;
int s=0;
struct Node *start=NULL;
void showAll();
void deleteAtSP(int p);
void insertAtB(int x);
void BubbleSort();
void reverseList();
int countNode();
void palindrome();
void middle();
void binary(struct Node *temp){
	if(temp==NULL)return;
	binary(temp->next);
	s+=(temp->data<<i++);
}
void main(){
	insertAtB(1);
	insertAtB(0);
	insertAtB(0);
	insertAtB(1);
	insertAtB(1);
	binary(start);
	printf("%d\n",s);
	/*
	insertAtB(30);
	insertAtB(40);
	insertAtB(50);
	insertAtB(5);
	insertAtB(2);
	*/
	/*
	showAll();
	printf("-----\n");
	middle();
	*/
	/*
	BubbleSort();
	showAll();
	printf("-----\n");
	*/

}
void insertAtB(int x){
	struct Node *temp=malloc(sizeof(struct Node));
	if(temp==NULL){
		printf("Memory full");
		return;
	}
	temp->data=x;
	temp->next=start;
	start=temp;
}
void showAll(){
	
	if(start==NULL){
		printf("List is empty");
		return;
	}
	struct Node *temp=start;
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
void deleteAtSP(int p){
	
	struct Node *temp1;
	struct Node *temp=start;
	int i;
	for(i=1;i<p-1;i++){
		temp=temp->next;
	}
	temp1=temp->next;
	temp->next=temp->next->next;
	free(temp1);
}
int countNode(){
	if(start==NULL) return 0;
	int c=0;
	struct Node *temp=start;
	while(temp!=NULL){
		c++;
		temp=temp->next;
	}
	return c;
}
void BubbleSort(){
	int n=countNode();
	int i,j,k;
	struct Node *t1,*t2;
	for(i=n-2;i>=0;i--){
		t1=start;
		t2=t1->next;
		for(j=0;j<=i;j++){
			if(t1->data > t2->data){
				k=t1->data;
				t1->data=t2->data;
				t2->data=k;
			}
			t1=t2;
			t2=t2->next;
		}
	}
	return;
}
void palindrome(){
	if(start==NULL)return;
	int i;
	struct Node *temp=start;
	struct Node *temp1=temp;
	while(temp1->next!=NULL){
		temp1=temp1->next;
	}
	struct Node *temp2=start;
	for(i=1;i<=countNode()/2;i++){
	temp2=start;
		if(temp->data==temp1->data){
			temp=temp->next;
			while(temp2->next!=temp1) temp2=temp2->next;
			temp1=temp2;
		}else break;
	}
	if(i>countNode()/2) printf("palindrome\n");
	else printf("Not palindrome\n");
}
void middle(){
	if(start==NULL){
		return;
	}
	int i;
	struct Node *temp=start;
	for(i=1;i<=countNode()/2;i++){
		temp=temp->next;
	}
	struct Node *temp1=start;
	if(countNode()%2==0){
		while(temp1->next!=temp) temp1=temp1->next;
		printf("%d\n",temp1->data);
	}
	printf("%d\n",temp->data);
}
