#include<stdio.h>
void show(int x[],int n,int i){
	int l=2*i+1;
	int r=2*i+2;
	int t,max=i;
	
	/*
	if(r<n){
		if(x[l]>x[r]) max=l;
		else max=r;
	}
	else if(l<n) max=l;
	*/
	
	if(l<n && x[l]>x[max]) max=l;
	if(r<n && x[r]>x[max]) max=r;
	
	
	if(x[max]>x[i]){
		t=x[i];
		x[i]=x[max];
		x[max]=t;
		show(x,n,max);
	}
}
void showloop(int x[],int n){
	for(int i=n/2-1;i>=0;i--){
		show(x,n,i);
	}
}
void main(){
	int x[]={1,2,3,4,5};
	int n=5;
	showloop(x,n);
	for(int i=0;i<n;i++){
		printf("%d ",x[i]);
	}
}