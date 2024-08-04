#include<stdio.h>
void show(int x[],int n,int i){
	int l=2*i+1;
	int r=2*i+2;
	int min=i,t;
	if(r<n){
		if(x[l]<x[r]) min=l;
		else min=r;
	}
	else if(l<n) min=l;
	if(x[min]<x[i]){
		t=x[min];
		x[min]=x[i];
		x[i]=t;
		show(x,n,min);
	}
}
void showloop(int x[],int n){
	for(int i=n/2-1;i>=0;i--){
		show(x,n,i);
	}
}
void deletenode(int x[],int n){
	int t;
	for(int i=n-1;i>0;i--){
		t=x[i];
		x[i]=x[0];
		x[0]=t;
		show(x,i,0);
	}
}
void display(int x[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",x[i]);
	}
	printf("\n");
}
void main(){
	int x[]={1,12,2,13,14,24,45};
	int n=7;
	showloop(x,n);
	deletenode(x,n);
	display(x,n);
}
