//infix to postfix
#include<stdio.h>
#include<stdbool.h>
#define capacity 50
char stack[capacity];
int top=-1;
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
int pr(char x){
	switch(x){
		case '(':
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
void main(){
	char input[capacity];
	char output[capacity];
	printf("Enter Any Expression\n");
	scanf("%s",input);
	int i=0,k=0;
	while(input[i]!='\0'){
		if(input[i]=='('){
			push(input[i]);
		}
		else{
			if(input[i]>='A' && input[i]<='Z'){
				output[k++]=input[i];
			}
			else if(input[i]==')'){
				while(peek()!='('){
					output[k++]=pop();
				}
				pop();
			}
			else{
				while(pr(peek())>=pr(input[i])){
					output[k++]=pop();
				}
				push(input[i]);
			}
		}
		i++;
	}
	output[k++]='\0';
	printf("%s\n",output);
}










