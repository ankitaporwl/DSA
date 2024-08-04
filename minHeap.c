#include<stdio.h>
void show(int x[],int n,int i){
	int l=2*i+1;
	int r=2*i+2;
	int t,min=i;
	
	/*
	if(r<n){
		if(x[l]<x[r]) min=l;
		else min=r;
	}
	else if(l<n){
		min=l;
	}
	*/
	
	if(l<n && x[l]<x[min]) min=l;
	if(r<n && x[r]<x[min]) min=r;
		
	
	if(x[min]<x[i]){
		t=x[i];
		x[i]=x[min];
		x[min]=t;
		show(x,n,min);
	}
}
void showloop(int x[],int n){
	for(int i=n/2-1;i>=0;i--){
		show(x,n,i);
	}
}
void main(){
	int x[]={10,9,8,7,6,5,4,3,2,1};
	int n=10;
	showloop(x,n);
	for(int i=0;i<n;i++){
		printf("%d ",x[i]);
	}
}