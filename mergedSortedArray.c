//program to merge two array such that the resultant merged array is also sorted
#include<stdio.h>
void sum(int x[],int y[],int z[],int n1,int n2){
	int i,j,k;
	for(i=0,j=0,k=0;i<n1&&j<n2;){
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
void main(){
	int x[]={2,4,6,8,10};
	int y[]={1,3,5,9,11,13};
	int z[11];
	sum(x,y,z,5,6);
	for(int i=0;i<11;i++){
		printf("%d ",z[i]);
	}
}