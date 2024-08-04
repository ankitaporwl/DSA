#include<stdio.h>
void display(int x[],int n){
	int i;
	for(i=0;i<n;i++) printf("%d ",x[i]);
	printf("\n");
}
void show(int x[],int n){
	int i,j,value;
	for(i=1;i<n;i++){
		value=x[i];
		for(j=i;j>0;j--){
			if(x[j-1]>value) {
				x[j]=x[j-1];
			}
			else break;
		}
		x[j]=value;
		display(x,n);
	}
}
void main(){
	int n=8;
	int x[]={56,29,35,42,15,41,75,21};
	display(x,n);
	show(x,n);
}


/*
OUTPUT--
56 29 35 42 15 41 75 21
29 56 35 42 15 41 75 21
29 35 56 42 15 41 75 21
29 35 42 56 15 41 75 21
15 29 35 42 56 41 75 21
15 29 35 41 42 56 75 21
15 29 35 41 42 56 75 21
15 21 29 35 41 42 56 75
*/