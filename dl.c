//doubly linked list
#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
	struct Node *prev;
};
struct Node *start=NULL;
struct Node *end=NULL;
void insertAtB(int x);
void insertAtE(int x);
void insertAtSP(int p,int x);
void deleteAtB();
void deleteAtE();
void deleteAtSP(int p);
void showAll1();
void showAll2();
int searchNode(int x);
int countNode();
void main(){
	M:
	printf("-------OPERATIONS---------\n");
	printf("1.Insertion At Beginning:\n");
	printf("2.Insertion At End:\n");
	printf("3.Insertion At Specified Position:\n");
	printf("4.Deletion At Beginning:\n");
	printf("5.Deletion At End:\n");
	printf("6.Deletion At Specified Position:\n");
	printf("7.Show All Data:\n");
	printf("8.Show All Data In Reverse Order:\n");
	printf("9.Search Data:\n");
	printf("10.Exit:\n");
	printf("Enter Your Choice between 1 to 10:\n");
	int n,x,p;
	scanf("%d",&n);
	if(n<1 || n>10){
		printf("-------Enter Right Choice:-----------\n");
		goto M;
	}
	switch(n){
		case 1:
		printf("Insertion At Beginning:\n");
		printf("Enter Data To Be inserted:\n");
		scanf("%d",&x);
		insertAtB(x);
		printf("------------------\n");
		showAll1();
		goto M;
		case 2:
		printf("Insertion At End:\n");
		printf("Enter Data To Be inserted:\n");
		scanf("%d",&x);
		insertAtE(x);
		printf("------------------\n");
		showAll1();
		goto M;
		case 3:
		printf("Insertion At Specified Position:\n");
		printf("Enter Specific Position:\n");
		scanf("%d",&p);
		printf("Enter Data To Be inserted:\n");
		scanf("%d",&x);
		insertAtSP(p,x);
		printf("------------------\n");
		showAll1();
		goto M;
		case 4:
		printf("Deletion At Beginning:\n");
		deleteAtB();
		printf("------------------\n");
		showAll1();
		goto M;
		case 5:
		printf("Deletion At End:\n");
		deleteAtE();
		printf("------------------\n");
		showAll1();
		goto M;
		case 6:
		printf("Deletion At Specified Position:\n");
		printf("Enter Specific Position:\n");
		scanf("%d",&p);
		deleteAtSP(p);
		printf("------------------\n");
		showAll1();
		goto M;
		case 7:
		printf("------------------\n");
		printf("Show All Data:\n");
		showAll1();
		printf("------------------\n");
		goto M;
		case 8:
		printf("Show All Data In Reverse Order:\n");
		printf("------------------\n");
		showAll2();
		printf("------------------\n");
		goto M;
		case 9:
		printf("Search Data:\n");
		printf("Enter Data To Be Searched:\n");
		scanf("%d",&x);
		printf("The Given Data Is Found At %d\n",searchNode(x));
		printf("------------------\n");
		goto M;
		case 10:
		printf("---------END---------\n");
		exit(0);
	}
}
void insertAtB(int x){
	struct Node *temp=malloc(sizeof(struct Node));
	if(temp==NULL){
		printf("No Space\n");
		return;
	}
	temp->data=x;
	temp->prev=NULL;
	temp->next=start;
	if(start!=NULL){
		start->prev=temp;
	}
	else{
		end=temp;
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
		printf("No Space\n");
		return;
	}
	temp->data=x;
	temp->next=NULL;
	temp->prev=end;
	end->next=temp;
	end=temp;
}
void insertAtSP(int p,int x){
	int n=countNode();
	if(p<=1){
		insertAtB(x);
		return;
	}
	if(p>n){
		insertAtE(x);
		return;
	}
	struct Node *temp2=malloc(sizeof(struct Node));
	struct Node *temp=start;
	struct Node *temp1;
	int i;
	for(i=1;i<p;i++){
		temp1=temp;
		temp=temp->next;
	}
	temp1->next=temp2;
	temp2->data=x;
	temp2->prev=temp1;
	temp2->next=temp;
	temp->prev=temp2;
}
void deleteAtB(){
	if(start==NULL){
		printf("List Is Empty\n");
		return;
	}
	struct Node *temp=start;
	start->next->prev=NULL;
	start=start->next;
	free(temp);
}
void deleteAtE(){
	if(countNode()<=1){
		deleteAtB();
		return;
	}
	struct Node *temp=end;
	end=end->prev;
	end->next=NULL;
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
	struct Node *temp=start;
	struct Node *temp1;
	for(int i=1;i<p;i++){
		temp1=temp;
		temp=temp->next;
	}
	temp1->next=temp->next;
	temp->next->prev=temp1;
	free(temp);
}
void showAll1(){
	if(start==NULL){
		printf("List Is Empty\n");
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
		printf("List Is Empty\n");
		return;
	}
	struct Node *temp=end;
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->prev;
	}
}
int searchNode(int x){
	if(start==NULL){
		return -1;
	}
	struct Node *temp=start;
	int c=-1;
	while(temp!=NULL){
		c++;
		if(temp->data==x){
			return c;
		}	
		temp=temp->next;
	}
	return -1;
}
int countNode(){
	if(start==NULL){
		return 0;
	}
	int c=0;
	struct Node *temp=start;
	while(temp!=NULL){
		c++;
		temp=temp->next;
	}
	return c;
}