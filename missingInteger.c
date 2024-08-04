//missing Integer In an array
#include<stdio.h>
void main(){
	int x[]={1,2,3,5,6,7,9};
	int n=sizeof(x)/sizeof(x[0]);
	int k=1;
	printf("Missing Integer:");
	for(int i=0;i<n;i++){
		if(x[i]==k) k++;
		else {
			printf(" %d ",k++);
			i--;			
		}
	}
	
}