#include<stdio.h>
int quick(int x[],int i,int n){
	int pi=x[n];
	int p=i;
	for(;i<=n;i++){
		if(x[i]<pi){
			int t=x[p];
			x[p]=x[i];
			x[i]=t;
			p++;
		}
	}
	int t=x[p];
	x[p]=pi;
	x[n]=t;
	return p;
}
void show(int x[],int i,int n){
	if(i>=n)return;
	int p=quick(x,i,n);
	show(x,i,p-1);
	show(x,p+1,n);
}
void main(){
	int x[]={12,34,-0,-12,56,7512,-123,-14};
	int n=8;
	int i;
	show(x,0,n-1);
	for(i=0;i<sizeof(x)/sizeof(x[0]);i++){
		printf("%d\t",x[i]);
	}
}