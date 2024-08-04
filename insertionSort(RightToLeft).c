#include<stdio.h>
void display(int x[],int n){
	int i;
	for(i=0;i<n;i++) printf("%d ",x[i]);
	printf("\n");
}
void show(int x[],int n){
	int i,j,value;
	for(i=n-2;i>=0;i--){
		value=x[i];
		for(j=i;j<n-1;j++){
			if(x[j+1]<value){
				x[j]=x[j+1];
			}else break;
		}
		x[j]=value;
		display(x,n);
	}
}
void main(){
	int x[]={56,29,35,42,15,41,75,21};
	int n=8;
	display(x,n);
	show(x,n);
}

/*
OUTPUT--
56 29 35 42 15 41 75 21
56 29 35 42 15 41 21 75
56 29 35 42 15 21 41 75
56 29 35 42 15 21 41 75
56 29 35 15 21 41 42 75
56 29 15 21 35 41 42 75
56 15 21 29 35 41 42 75
15 21 29 35 41 42 56 75
*/