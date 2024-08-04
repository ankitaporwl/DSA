//n- queen problem
#include<stdio.h>
#include<stdbool.h>
int count=0;
bool isValid(int x[4][4],int r,int c){
	int i,j;
	for(i=r;i>=0;i--){
		if(x[i][c]) return false;
	}
	for(i=r,j=c;i>=0&&j>=0;j--,i--){
		if(x[i][j]) return false;
	}
	return true;
}
void display(int x[4][4]){
	int i,j;
	count++;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
}

bool show(int x[4][4],int r){
	if(r>=4) return true;
	int j;
	for(j=0;j<4;j++){
		if(isValid(x,r,j)){
			x[r][j]=1;
			display(x);
			if(show(x,r+1)) return true;
			x[r][j]=0;
			display(x);
		}
	}
	return false;
}

void main(){
	int x[4][4]={{1,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
	show(x,0);
	printf("%d",count);
}