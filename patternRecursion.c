//pattern sheet-->>1 using recursion
/*1
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
#include<stdio.h>
void show1(int i,int j);
void show(int i,int j){
	if(i<=0)return;
	show1(i,j);
	show(i-1,j);
}
void show1(int i,int j){
	if(j<=0){
		printf("\n");
		return;
	}
	show1(i,j-1);
	printf("%d ",j);
}
void main(){
	show(5,5);
}




#include<stdio.h>
void show(int i,int j){
	if(i<=0){
		return;
	}
	if(j<=0){
		printf("\n");
		return;
	}
	show(i,j-1);
	printf("%d ",j);
	if(j==5){
		show(i-1,j);
	}
}
void main(){
	show(5,5);
}
*//*2
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
#include<stdio.h>
void show(int i,int j){
	if(i<=0) return;
	if(j<=0){
		printf("\n");
		return;
	}
	show(i,j-1);
	printf("%d ",j);
	if(j==i){
		show(i-1,j-1);
	}
}
void main(){
	show(5,5);
}
*//*3
1 2 3 4 5
2 3 4 5
3 4 5
4 5
5
#include<stdio.h>
void show(int i,int j){
	if(i<=0) return;
	if(j<6-i){
		printf("\n");
		return;
	}
	show(i,j-1);
	printf("%d ",j);
	if(j==5){
		show(i-1,j);
	}
}
void main(){
	show(5,5);
}
*//*4
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
#include<stdio.h>
void show(int i,int j){
	if(i<=0)return;
	if(j<=0){
		printf("\n");
		return;
	}
	if(j==i){
		show(i-1,j-1);
	}
	show(i,j-1);
	printf("%d ",j);
}
void main(){
	show(5,5);
}
*//*5
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
#include<stdio.h>
void show(int i,int j){
	if(i<=0)return;
	if(j<=0){
		printf("\n");
		return;
	}
	if(j==i){
		show(i-1,j-1);
	}
	printf("%d ",j);
	show(i,j-1);
}
void main(){
	show(5,5);
}
*//*6
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
#include<stdio.h>
void show(int i,int j){
	if(i<=0)return;
	if(j<=0){
		printf("\n");
		return;
	}
	printf("%d ",j);
	show(i,j-1);
	if(j==5){
		show(i-1,j);
	}
}
void main(){
	show(5,5);
}
*//*7
5 4 3 2 1
5 4 3 2
5 4 3
5 4
5

#include<stdio.h>
void show(int i,int j){
	if(i<=0)return;
	if(j<6-i){
		printf("\n");
		return;
	}
	printf("%d ",j);
	show(i,j-1);
	if(j==5){
		show(i-1,j);
	}
}
void main(){
	show(5,5);
}
*//*8
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1

#include<stdio.h>
void show(int i,int j){
	if(i<=0)return;
	if(j<i){
		printf("\n");
		return;
	}
	printf("%d ",j);
	show(i,j-1);
	if(j==5){
		show(i-1,j);
	}
}
void main(){
	show(5,5);
}
*//*9
5
4 5
3 4 5
2 3 4 5
1 2 3 4 5
#include<stdio.h>
void show(int i,int j){
	if(i<=0)return;
	if(j<i){
		printf("\n");
		return;
	}
	show(i,j-1);
	printf("%d ",j);
	if(j==5){
		show(i-1,j);
	}
}
void main(){
	show(5,5);
}
*//*10
6
1 6
1 2 6
1 2 3 6
1 2 3 4 6
1 2 3 4 5 6
#include<stdio.h>
void show(int i,int j){
	if(i<=0)return;
	if(j<=0){
		printf("6\n");
		return;
	}
	if(j==i){
		show(i-1,j-1);
	}
	
	show(i,j-1);
	
	printf("%d ",j);
}
void main(){
	show(5,6);
}
*/