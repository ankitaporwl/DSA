//infix to prefix conversion
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define capacity 50
void push(char x);
char pop();
char peek();
bool isEmpty();
int pr(char x);
int top=-1;
char stack[capacity];
void main(){
	int i=0,k=0;
	char input[capacity];
	char output[capacity];
	printf("Enter Any Expression:\n");
	scanf("%s",input);
	
	while(input[i]!='\0'){
		i++;
	}
	int a,b,t;
	for(a=0,b=i-1;a<=b;a++,b--){
		t=input[a];
		input[a]=input[b];
		input[b]=t;
	}
	input[i]='\0';
	i=0;
	
	while(input[i]!='\0'){
		if(input[i]==')') push(input[i]);
		else{
			if(input[i]>='A' && input[i]<='Z') output[k++]=input[i];
			else if(input[i]=='('){
				while(peek()!=')'){
					output[k++]=pop();
				}
				pop();
			}
			else{
				while(pr(peek())>=pr(input[i]))  output[k++]=pop();
				push(input[i]);
			}
		}
		i++;
	}
	for(a=0,b=k-1;a<=b;a++,b--){
		t=output[a];
		output[a]=output[b];
		output[b]=t;
	}
	output[k++]='\0';
	printf("%s\n",output);
}
int pr(char x){
	switch(x){
		case ')':
		return 0;
		case '+':
		case '-':
		return 1;
		case '*':
		case '/':
		return 2;
		case '^':
		return 3;
	}
}
bool isEmpty(){
	if(top==-1){
		return true;
	}
	return false;
}
void push(char x){
	if(top==capacity-1){
		printf("stack is full\n");
		return;
	}
	stack[++top]=x;
}
char pop(){
	if(top==-1){
		printf("stack is empty\n");
		return '0';
	}
	return stack[top--];
}
char peek(){
	if(top==-1){
		printf("stack is empty\n");
		return '0';
	}
	return stack[top];
}