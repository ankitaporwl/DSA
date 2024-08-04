#include<stdio.h>
void sum(int x[],int y[],int z[],int n1,int n2){
	int i,j,k;
	for(i=0,j=0,k=0;i<n1 && j<n2;){
		if(x[i]>y[j]){
			z[k++]=y[j++];
		}else{
			z[k++]=x[i++];
		}
	}
	while(i<n1){
		z[k++]=x[i++];
	}
	while(j<n2){
		z[k++]=y[j++];
	}
}
void msort(int x[],int n){
	if(n<=1)return;
	int m1=n/2;
	int m2=n-m1;
	int a[m1],b[m2];
	for(int i=0;i<m1;i++){
		a[i]=x[i];
	}
	for(int j=0;j<m2;j++){
		b[j]=x[m1+j];
	}
	
	msort(a,m1);
	msort(b,m2);
	sum(a,b,x,m1,m2);
}
void main(){
	int x[]={45,34,56,89,12,78,32};
	int n=7;
	msort(x,n);
	for(int i=0;i<n;i++){
		printf("%d ",x[i]);
	}
}