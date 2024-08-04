#include<stdio.h>
void display(int x[],int n);
void ssort(int x[],int n){
	int min;
	int i,j,t;
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(x[j]<x[min]) min=j;
		}
		if(min!=i){
			t=x[i];
			x[i]=x[min];
			x[min]=t;
			display(x,n);
		}
	}
}
void display(int x[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",x[i]);
	}
	printf("\n");
}
void main(){
	int x[]={45,34,56,89,12,99,32};
	int n=7;
	display(x,n);
	ssort(x,n);
	
}