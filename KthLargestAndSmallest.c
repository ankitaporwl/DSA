//Kth largest and Kth smallest an array
#include<stdio.h>
void main(){
	int x[]={10,30,450,20,40,20,24,678};
	int n=sizeof(x)/sizeof(x[0]);
	int k;
	printf("Enter k:");
	scanf("%d",&k);
	int i,j,t;
	for(i=n-2;i>=0;i--){
		for(j=i;j<n-1;j++){
			if(x[j]>x[j+1]){
				t=x[j];
				x[j]=x[j+1];
				x[j+1]=t;
			}
		}
	}
	printf("%d largest elmenet=%d\n",k,x[n-k]);
	printf("%d smallest elmenet=%d\n",k,x[k-1]);
	
}