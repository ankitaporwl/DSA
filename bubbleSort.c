#include<stdio.h>
void main(){
	int x[]={23,56,89,13,78,55,99};
	int n=7;
	int i,j,t,k;
	for(i=n-2;i>=0;i--){
		for(j=0;j<=i;j++){
			if(x[j]>x[j+1]){
				t=x[j];
				x[j]=x[j+1];
				x[j+1]=t;
			}
			for(k=0;k<n;k++){
				printf("%d ",x[k]);
			}
			printf("\n");
		}
	
		printf("\n");
	}
}