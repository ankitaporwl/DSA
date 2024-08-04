#include<stdio.h>
void display(int x[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",x[i]);
	}
	printf("\n");
}
void ssort(int x[],int n){
	int max;
	int i,j,t;
	for(i=n-1;i>0;i--){
		max=i;
		for(j=i-1;j>=0;j--){
			if(x[j]>x[max]) max=j;
		}
		if(max!=i){
			t=x[i];
			x[i]=x[max];
			x[max]=t;
			display(x,n);
		}
	}
}
void main(){
	int x[]={45,34,56,89,12,99,32};
	int n=7;
	display(x,n);
	ssort(x,n);
}