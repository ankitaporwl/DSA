// #include<stdio.h>
// #include<stdbool.h>
// #define capacity 50
// int top=-1;
// int stack[capacity];
// void push(char x){
	// if(top==capacity-1){
		// printf("Stack Overflow\n");
		// return;
	// }
	// stack[++top]=x;
// }
// char pop(){
	// if(top==-1){
		// printf("Stack Underflow\n");
		// return ' ';
	// }
	// return stack[top--];
// }
// char peek(){
	// if(top==-1){
		// printf("Stack Underflow\n");
		// return ' ';
	// }
	// return stack[top];
// }
// bool isEmpty(){
	// if(top==-1){
		// return true;
	// }
	// return false;
// }
// void main(){
	// char input[100];
	// printf("Enter any string:\n");
	// scanf("%[^\n]s",input);
	// char ouput[100];
	// int i=0;
	// while(input[i]!='\0'){
		// push(input[i]);
		// i++;
	// }
	// push('A');
	// push('S');
	// push('D');
	// printf("%c\n",pop());
	// printf("%c\n",pop());
	// printf("%c\n",peek());
// }
#include<stdio.h>
#include<conio.h>
void main(){
	int x[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int i,j;
	for(i=0;i<3/2;i++){
		for(j=0;j<3/2;j++){
			int t=x[i][2-j];
			x[i][2-j]=x[2-j][i];
			x[2-j][i]=t;
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}
}