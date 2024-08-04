#include<stdio.h>
void main(){
	 int i,j;
	 int arr[5][5];
	 for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i+j>=4){
				if(i+j==4 || j==4){
					arr[i][j]=1;
				}else{
					arr[i][j]=arr[i-1][j+1]+arr[i-1][j];
				}
				printf("%d ",arr[i][j]);
			}else{
				printf(" ");
			}
		}
		 printf("\n");
	 }
}
