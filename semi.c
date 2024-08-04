//loops sheet-->> 1 without semicolon
/*1
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=5){
		while(j<=5){
			if(printf("%d ",j++)){}
		}
		if(printf("\n",j=1,i++)){}
	}
}
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
*//*2
#include<stdio.h>
void main(int i,int j){
	if(j=5){}
	while(j>=1){
		while(i<=j){
			if(printf("%d ",i++)){}
		}
		if(printf("\n",i=1,j--)){}
	}
}
1 2 3 4 5
1 2 3 4 
1 2 3 
1 2 
1
*//*3
#include<stdio.h>
void main(int i,int j){
	if(j=i){}
	while(i<=5){
		while(j<=5){
			if(printf("%d ",j++)){}
		}
		if(printf("\n",j=i,i++)){}
	}
}
1 2 3 4 5
2 3 4 5
3 4 5
4 5
5
*//*4
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=5){
		while(j<=i){
			if(printf("%d ",j++)){}
		}
		if(printf("\n",j=1,i++)){}
	}
}
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*//*5
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i++<=5){
		while(j>=1){
			if(printf("%d ",j--)){}
		}
		if(printf("\n",j=i)){}
	}
}
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
*//*6
#include<stdio.h>
void main(int i,int j){
	if(j=5){}
	while(i<=5){
		while(j>=1){
			if(printf("%d ",j--)){}
		}
		if(printf("\n",i++,j=5)){}
	}
}
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
*//*7
#include<stdio.h>
void main(int i,int j){
	if(j=5){}
	while(i<=5){
		while(j>=i){
			if(printf("%d ",j--)){}
		}
		if(printf("\n",i++,j=5)){}
	}
}
5 4 3 2 1
5 4 3 2
5 4 3
5 4
5
*//*8
#include<stdio.h>
void main(int i,int j){
	if(i=5){}
	if(j=5){}
	while(i>=1){
		while(j>=i){
			if(printf("%d ",j--)){}
		}
		if(printf("\n",i--,j=5)){}
	}
}
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1
*//*9
#include<stdio.h>
void main(int i,int j){
	if(j=5){}
	if(i=5){}
	while(i>=1){
		while(j<=5){
			if(printf("%d ",j++)){}
		}
		if(printf("\n",j=i,i--)){}
	}
}
5
4 5
3 4 5
2 3 4 5
1 2 3 4 5
*//*10
#include<stdio.h>
void main(int i,int j){
	if(i=0){}
	if(j=1){}
	while(i<6){
		while(j<=i){
			if(printf("%d ",j++)){}
		}
		if(printf("6\n",i++,j=1)){}
	}
}
6
1 6
1 2 6
1 2 3 6
1 2 3 4 6
1 2 3 4 5 6
*//*11
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=5){
		while(j<=5){
			if(printf("%d ",i+j)){}
			if(j=j+1){}
		}
		if(printf("\n",j=1,i++)){}
	}
}
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
5 6 7 8 9
6 7 8 9 10
*//*12
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=5){
		while(j<=5){
			if(printf("* ",j++)){}
		}
		if(printf("\n",j=1,i++)){}
	}
}
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*//*13
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=5){
		while(j<=i){
			if(printf("* ",j++)){}
		}
		if(printf("\n",j=1,i++)){}
	}
}
*
* *
* * *
* * * *
* * * * *
*//*14
#include<stdio.h>
void main(int i,int j){
	if(j=i){}
	while(i<=5){
		while(j<=5){
			if(printf("* ",j++)){}
		}
		if(printf("\n",j=i,i++)){}
	}
}
* * * * *
* * * *
* * *
* *
*
*//*15
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=5){
		while(j<=5){
			if(j<=i && printf("%d ",j++)){}
			else if(printf("* ",j++)){}
		}
		if(printf("\n",j=1,i++)){}
	}
}
1 * * * *
1 2 * * *
1 2 3 * *
1 2 3 4 *
1 2 3 4 5
*//*16
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=5){
		while(j<=5){
			if(i%2==1 && printf("%d ",j++)){}
			else if(printf("* ",j++)){}
		}
		if(printf("\n",j=1,i++)){}
	}
}
1 2 3 4 5
* * * * *
1 2 3 4 5
* * * * *
1 2 3 4 5
*//*17
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=5){
		while(j<=5){
			if(j<=i && printf("%d ",i,j++)){}
			else if(printf("%d ",j++)){}
		}
		if(printf("\n",j=1,i++)){}
	}
}
1 2 3 4 5
2 2 3 4 5
3 3 3 4 5
4 4 4 4 5
5 5 5 5 5
*//*18
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=7){
		while(j<=i){
			if(printf("%d ",j%2)){}
			if(j++){}
		}
		if(printf("\n",j=1,i++)){}
	}
}
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
1 0 1 0 1 0
1 0 1 0 1 0 1
*//*19
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=7){
		while(j>=1){
			if(printf("%d ",j%2)){}
			if(j--){}
		}
		if(printf("\n",j=i,i++)){}
	}
}
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
0 1 0 1 0 1
1 0 1 0 1 0 1
*//*20
#include<stdio.h>
void main(int i,int j){
	if(j=7){}
	while(i<=7){
		while(j>=i){
			if(printf("%d ",j%2)){}
			if(j--){}
		}
		if(printf("\n",j=7,i++)){}
	}
}
1 0 1 0 1 0 1
1 0 1 0 1 0
1 0 1 0 1
1 0 1 0
1 0 1
1 0
1
*//*21
#include<stdio.h>
void main(int i,int j){
	if(i=7){}
	if(j=i){}
	while(i>=1){
		while(j>=1){
			if(printf("%d ",j%2)){}
			if(j--){}
		}
		if(printf("\n",j=i,i--)){}
	}
}
1 0 1 0 1 0 1
0 1 0 1 0 1
1 0 1 0 1
0 1 0 1
1 0 1
0 1
1
*//*22
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=5){
		while(j<=5){
			if(printf("%d ",i,j++)){}
		}
		if(printf("\n",j=1,i++)){}
	}
}
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5
*//*23
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=5){
		while(j<=i){
			if(printf("%d ",i,j++)){}
		}
		if(printf("\n",j=1,i++)){}
	}
}
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*//*24
#include<stdio.h>
void main(int i,int j){
	if(i=5){}
	if(j=5){}
	while(i>=1){
		while(j<=5){
			if(printf("%d ",i,j++)){}
		}
		if(printf("\n",j=i,i--)){}
	}
}
5
4 4
3 3 3
2 2 2 2
1 1 1 1 1
*//*25
#include<stdio.h>
void main(int i,int j,int k){
	if(k=1){}
	if(j=1){}
	while(i<=4){
		while(j<=i){
			if(printf("%d ",k++,j++)){}
		}
		if(printf("\n",j=1,i++)){}
	}
}
1
2 3
4 5 6
7 8 9 10
*//*26
#include<stdio.h>
void main(int i,int j,int t,int m,int n){
	if(m=-1){}
	if(n=1){}
	if(j=1){}
	while(i<=4){
		while(j<=i){
			if(t=m+n){}
			if(printf("%d ",t,j++)){}
			if(m=n){}
			if(n=t){}
		}
		if(printf("\n",j=1,i++)){}
	}
}
0
1 1
2 3 5
8 13 21 34
*//*27
#include<stdio.h>
void main(int i,int j,int a,int b,int c){
	if(a=1,b=1,j=2,c=1){}
	while(i<=43){
		if(c=1,j=2){}
		while(j<i){
			if(i%j==0){
				if(c=0){}
			}
			if(j++){}
		}
		if(c==1){
			if(printf("%d ",i++)){}
			if(a==b && printf("\n",a=0,b++)){}
			if(a++){}
		}else if(c==0 && i++){}
	}
}
1
2 3
5 7 11
13 17 19 23
29 31 37 41 43
*//*28
#include<stdio.h>
void main(int i,int j,int a,int b,int c){
	if(j=2,c=0,a=1,b=1){}
	while(i<=25){
		if(c=0,j=2){}
		while(j<i){
			if(i%j==0){
				if(c=1){}
			}
			if(j++){}
		}
		if(c==1){
			if(printf("%d ",i++)){}
			if(a==b && printf("\n",a=0,b++)){}
			if(a++){}
		}else if(c==0 && i++){}
	}
}
4
6 8
9 10 12
14 15 16 18
20 21 22 24 25
*//*29
#include<stdio.h>
void main(int i,int j,int k){
	if(j=1,k=0){}
	while(i<=4){
		while(j<=i){
			if(printf("%d ",(k++)%5,j++)){}
		}	
		if(printf("\n",i++,j=1)){}
	}
}
0
1 2
3 4 0
1 2 3 4
*//*30
#include<stdio.h>
void main(int i,int j,int k){
	if(j=1,k=0){}
	while(i<=4){
		while(j<=i){
			if(printf("%d ",(k++)%3,j++)){}
		}	
		if(printf("\n",i++,j=1)){}
	}
}
0
1 2
0 1 2
0 1 2 0
*//*31
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=8){
		if(i%2==0 && printf(" ")){}
		while(j<=11){
			if(printf("*",j++)){}
		}
		if(printf("\n",j=1,i++)){}
	}
}
***********
 ***********
***********
 ***********
***********
 ***********
***********
 ***********
*//*32
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=6){
		while(j<=16){
			if(j>=i && j-i<=10 && printf("*")){}
			else if(printf(" ")){}
			if(j++){}
		}
		if(printf("\n",j=1,i++)){}
	}
}
***********
 ***********
  ***********
   ***********
    ***********
     ***********
*//*33
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=5){
		while(j<=5){
			if(i%2==0 && printf("A ",j++)){}
			else if(printf("%d ",j++)){}
		}
		if(printf("\n",j=1,i++)){}
	}
}
1 2 3 4 5
A A A A A
1 2 3 4 5
A A A A A
1 2 3 4 5
*//*34
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=5){
		while(j<=5){
			if(i==j && printf("0 ",j++)){}
			else if(printf("%d ",j++)){}
		}
		if(printf("\n",j=1,i++)){}
	}
}
0 2 3 4 5
1 0 3 4 5
1 2 0 4 5
1 2 3 0 5
1 2 3 4 0
*//*35
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=5){
		while(j<=5){
			if((i+j)%2==1 && printf("* ",j++)){}
			else if(printf("%d ",j++)){}
		}
		if(printf("\n",j=1,i++)){}
	}
}
1 * 3 * 5
* 2 * 4 *
1 * 3 * 5
* 2 * 4 *
1 * 3 * 5
*//*36
#include<stdio.h>
void main(int i,int j,int k){
	if(j=1,k=5){}
	while(i<=5){
		while(j<=5){
			if(i%2==1 && printf("%d ",j++)){}
			else if(printf("%d ",k--,j++)){}
		}
		if(printf("\n",j=1,k=5,i++)){}
	}
}
1 2 3 4 5
5 4 3 2 1
1 2 3 4 5
5 4 3 2 1
1 2 3 4 5
*//*37
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=5){
		while(j<=5){
			if((i==1||i==5||j==1||j==5)&&printf("* ",j++)){}
			else if(printf("%d ",j++)){}
		}
		if(printf("\n",j=1,i++)){}
	}
}
* * * * *
* 2 3 4 *
* 2 3 4 *
* 2 3 4 *
* * * * *
*//*38
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=5){
		while(j<=5){
			if(i%2==1 && printf("%d ",i*j++)){}
			else if(printf("%d ",i*j++/2)){}
		}
		if(printf("\n",j=1,i++)){}
	}
}
1 2 3 4 5
1 2 3 4 5
3 6 9 12 15
2 4 6 8 10
5 10 15 20 25
*//*39
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=5){
		while(j<=5){
			if(i%2==1 && printf("%d ",i,j++)){}
			else if(printf("%d ",j++)){}
		}
		if(printf("\n",j=1,i++)){}
	}
}
1 1 1 1 1
1 2 3 4 5
3 3 3 3 3
1 2 3 4 5
5 5 5 5 5
*//*40
#include<stdio.h>
void main(int i,int j,int k){
	if(j=1,k=1){}
	while(i<=5){
		while(j<=5){
			if(i+j>=6 && printf("%d ",k++,j++)){}
			else if(printf(" ",j++)){}
		}
		if(printf("\n",j=1,k=1,i++)){}
	}
}
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
*//*41
#include<stdio.h>
void main(int i,int j,int k){
	if(j=1,k=1){}
	while(i<=5){
		while(j<=9){
			if(i+j>=6 && j-i<=4 && printf("%d",k++,j++)){}
			else if(printf(" ",j++)){}
		}
		if(printf("\n",j=1,k=1,i++)){}
	}
}
    1
   123
  12345
 1234567
123456789
*//*42
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=5){
		while(j<=9){
			if(i+j>=6 && j-i<=4 && printf("%d",i,j++)){}
			else if(printf(" ",j++)){}
		}
		if(printf("\n",i++,j=1)){}
	}
}
    1
   222
  33333
 4444444
555555555
*//*43
#include<stdio.h>
void main(int i,int j,int k){
	if(j=1,k=1){}
	while(i<=5){
		if(k=i){}
		while(j<=9){
			
			if(i+j>=6 && j-i<=4){
				if(printf("%d",k,j++)){}
				if(j<=5){
					if(k++){}
				}
				else if(k--){}
			}
			else if(printf(" ",j++)){}
		}
		if(printf("\n",i++,j=1)){}
	}
}
    1
   232
  34543
 4567654
567898765
*//*44
#include<stdio.h>
void main(int i,int j,int k){
	if(j=1,k=5){}
	while(i<=5){
		if(k=5){}
		while(j<=9){
			if(i+j>=6 && j-i<=4){
				if(printf("%d",k,j++)){}
				if(j<=5){
					if(k--){}
				}else if(k++){}
			}else if(printf(" ",j++)){}
		}
		if(printf("\n",i++,j=1)){}
	}
}
    5
   545
  54345
 5432345
543212345
*//*45
#include<stdio.h>
void main(int i,int j,int k){
	if(j=1,k=5){}
	while(i<=5){
		while(j<=9){
			if(j>=i && i+j<=10){
				if(printf("%d",k,j++)){}
			}else if(printf(" ",j++)){}
		}
		if(printf("\n",j=1,i++,k--)){}
	}
}
555555555
 4444444
  33333
   222
    1
*//*46
#include<stdio.h>
void main(int i,int j,int k){
	if(j=1,k=1){}
	while(i<=5){
		while(j<=9){
			if(j>=i && i+j<=10 && printf("%d",k++,j++)){}
			else if(printf(" ",j++)){}
		}
		if(printf("\n",j=1,i++,k=1)){}
	}
}
123456789
 1234567
  12345
   123
    1
*//*47
#include<stdio.h>
void main(int i,int j,int k){
	if(j=1){}
	while(i<=5){
		if(k=6-i){}
		while(j<=9){
			if(j>=i && i+j<=10){
				if(printf("%d",k,j++)){}
				if(j<=5){
					if(k++){}
				}
				else if(k--){}
			}else if(printf(" ",j++)){}
		}
		if(printf("\n",j=1,i++)){}
	}
}
567898765
 4567654
  34543
   232
    1
*//*48
#include<stdio.h>
void main(int i,int j,int k){
	if(j=1){}
	while(i<=5){
		if(k=5){}
		while(j<=9){
			if(j>=i && i+j<=10){
				if(printf("%d",k,j++)){}
				if(j<=5){
					if(k--){}
				}
				else if(k++){}
			}else if(printf(" ",j++)){}
		}
		if(printf("\n",j=1,i++)){}
	}
}
543212345
 5432345
  54345
   545
    5
*//*49
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=11){
		while(j<=11){
			if((i==1||i==11||j==1||j==11||i==j||i+j==12||i+j==7||i+j==17||j-i==5||i-j==5) && printf("* ",j++)){}
			else if(printf("  ",j++)){}
		}
		if(printf("\n",i++,j=1)){}
	}
}
* * * * * * * * * * *
* *     *   *     * *
*   * *       * *   *
*   * *       * *   *
* *     *   *     * *
*         *         *
* *     *   *     * *
*   * *       * *   *
*   * *       * *   *
* *     *   *     * *
* * * * * * * * * * *
*//*50
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=5){
		while(j<=5){
			if((i==j||i+j==6)&&printf("* ",j++)){}
			else if(printf("%d ",j++)){}
		}
		if(printf("\n",j=1,i++)){}
	}
}
* 2 3 4 *
1 * 3 * 5
1 2 * 4 5
1 * 3 * 5
* 2 3 4 *
*//*51
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=9){
		while(j<=9){
			if(i+j>=6 && j-i<=4 && i-j<=4 && i+j<=14 && printf("*",j++)){}
			else if(printf(" ",j++)){}
		}
		if(printf("\n",i++,j=1)){}
	}
}
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*//*52
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=9){
		while(j<=9){
			if(i+j>=6 && j-i<=4 && i-j<=4 && i+j<=14){
				if(i<=5 && printf("%d",i,j++)){}
				else if(printf("%d",10-i,j++)){}
			}
			else if(printf(" ",j++)){}
		}
		if(printf("\n",i++,j=1)){}
	}
}
    1
   222
  33333
 4444444
555555555
 4444444
  33333
   222
    1
*//*53
#include<stdio.h>
void main(int i,int j,int k){
	if(j=1,k=1){}
	while(i<=9)
	{
		if(k=1){}
		while(j<=9){
			if(i+j>=6 && j-i<=4 && i-j<=4 && i+j<=14 && printf("%d",k++,j++)){}
			else if(printf(" ",j++)){}
		}
		if(printf("\n",i++,j=1)){}
	}
}
    1
   123
  12345
 1234567
123456789
 1234567
  12345
   123
    1
*//*54
#include<stdio.h>
void main(int i,int j,char k){
	if(j=1,k='A'){}
	while(i<=5){
		while(j<=5){
			if(i+j>=6 && printf("%c ",k++,j++)){}
			else if(printf(" ",j++)){}
		}
		if(printf("\n",j=1,i++)){}
	}
}
    A
   B C
  D E F
 G H I J
K L M N O
*//*55
#include<stdio.h>
void main(int i,int j,int k){
	if(j=1,k=1){}
	while(i<=5){
		if(i<5 && printf("   ")){}
		while(j<=9){
			if(i+j>=6 && j-i<=4){
				if((i+j==6 || j-i==4) && printf("0 ",j++)){}
				else if(printf("%d ",k++,j++)){}
			}
			else if(printf("  ",j++)){}
		}
		
		if(printf("\n",j=1,i++)){}
	}
}
           0
         0 1 0
       0 2 3 4 0
     0 5 6 7 8 9 0
0 10 11 12 13 14 15 16 0
*//*56
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=11){
		while(j<=11){
			if(i+j>=12 && printf("* ",j++)){}
			else if(printf(" ",j++)){}
		}
		
		if(printf("\n",i++,j=1)){}
	}
}
          *
         * *
        * * *
       * * * *
      * * * * *
     * * * * * *
    * * * * * * *
   * * * * * * * *
  * * * * * * * * *
 * * * * * * * * * *
* * * * * * * * * * *
*//*57
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=11){
		while(j<=11){
			if(j>=i && printf("* ",j++)){}
			else if(printf(" ",j++)){}
		}
		
		if(printf("\n",i++,j=1)){}
	}
}
* * * * * * * * * * *
 * * * * * * * * * *
  * * * * * * * * *
   * * * * * * * *
    * * * * * * *
     * * * * * *
      * * * * *
       * * * *
        * * *
         * *
          *
*//*58
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=11){
		while(j<=11){
			if(i+j>=12){
				if((i+j==12||i==11||j==11)&& printf("* ",j++)){}
				else if(printf("  ",j++)){}
			}
			else if(printf(" ",j++)){}
		}
		
		if(printf("\n",i++,j=1)){}
	}
}
          *
         * *
        *   *
       *     *
      *       *
     *         *
    *           *
   *             *
  *               *
 *                 *
* * * * * * * * * * *
*//*59
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=11){
		while(j<=11){
			if(j>=i){
				if((j==i ||j==11||i==1)&& printf("* ",j++)){}
				else if(printf("  ",j++)){}
			}
			else if(printf(" ",j++)){}
		}
		
		if(printf("\n",i++,j=1)){}
	}
}
* * * * * * * * * * *
 *                 *
  *               *
   *             *
    *           *
     *         *
      *       *
       *     *
        *   *
         * *
          *
*//*60
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=11){
		while(j<=11){
			if((j==6||i==6||(i<6&&j==1)||(i>6&&j==11)||(j<6&&i==11)||(j>6&&i==1)) && printf("* ",j++)){}
			else if(printf("  ",j++)){}
		}
		if(printf("\n",i++,j=1)){}
	}
}
*         * * * * * *
*         *
*         *
*         *
*         *
* * * * * * * * * * *
          *         *
          *         *
          *         *
          *         *
* * * * * *         *
*//*61
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=11){
		while(j<=11){
			if((i==5||j==6||(i<5&&(j==1||j==11))) && printf("* ",j++)){}
			else if(printf("  ",j++)){}
		}
		if(printf("\n",i++,j=1)){}
	}
}
*         *         *
*         *         *
*         *         *
*         *         *
* * * * * * * * * * *
          *
          *
          *
          *
          *
          *
*//*62
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=11){
		while(j<=11){
			if((i==1||i==11||j==11||j==1||i==6||j==6||i+j==7||i+j==17||j-i==5||i-j==5) && printf("* ",j++)){}
			else if(printf("  ",j++)){}
		}
		if(printf("\n",i++,j=1)){}
	}
}
* * * * * * * * * * *
*       * * *       *
*     *   *   *     *
*   *     *     *   *
* *       *       * *
* * * * * * * * * * *
* *       *       * *
*   *     *     *   *
*     *   *   *     *
*       * * *       *
* * * * * * * * * * *
*//*63
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=5){
		while(j<=5){
			if(i+j>=6){
				if(i%2==1 && (j==5||i+j==6) && printf("1 ",j++)){}
				else if(i%2==0 && (j==5||i+j==6) && printf("0 ",j++)){}
				else if(printf("2 ",j++)){}
			}
			else if(printf(" ",j++)){}
		}
		if(printf("\n",j=1,i++)){}
	}
}
    1
   0 0
  1 2 1
 0 2 2 0
1 2 2 2 1
*//*64
#include<stdio.h>
void main(int i,int j){
	if(j=5,i=5){}
	while(i>=1){
		while(j>=1){
			if(j>=i && printf("%d ",j--)){}
			else if(printf("%d ",i,j--)){}
		}
		if(printf("\n",j=5,i--)){}
	}
}
5 5 5 5 5
5 4 4 4 4
5 4 3 3 3
5 4 3 2 2
5 4 3 2 1
*//*65
#include<stdio.h>
void main(int i,int j){
	if(j=1,i=5){}
	while(i>=1){
		while(j<=5){
			if(j<=i && printf("%d ",i,j++)){}
			else if(printf("%d ",j++)){}
		}
		if(printf("\n",j=1,i--)){}
	}
}
5 5 5 5 5
4 4 4 4 5
3 3 3 4 5
2 2 3 4 5
1 2 3 4 5
*//*66
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=5){
		while(j<=5){
			if(j<=i && printf("%d ",i,j++)){}
			else if(printf("%d ",j++)){}
		}
		if(printf("\n",j=1,i++)){}
	}
}
1 2 3 4 5
2 2 3 4 5
3 3 3 4 5
4 4 4 4 5
5 5 5 5 5
*//*67
#include<stdio.h>
void main(int i,int j){
	if(j=5){}
	while(i<=5){
		while(j>=1){
			if(j>=i && printf("%d ",j--)){}
			else if(printf("%d ",i,j--)){}
		}
		if(printf("\n",i++,j=5)){}
	}
}
5 4 3 2 1
5 4 3 2 2
5 4 3 3 3
5 4 4 4 4
5 5 5 5 5
*//*68
#include<stdio.h>
void main(int i,int j,int k){
	if(k=0,j=1){}
	while(i<=5){
		if(k=0){}
		while(j<=5){
			if(j>=i && printf("%d ",k++%i,j++)){}
			else if(printf(" ",j++)){}
		}
		if(printf("\n",i++,j=1)){}
	}
}
0 0 0 0 0
 0 1 0 1
  0 1 2
   0 1
    0
*//*69
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=5){
		if(j=i){}
		while(j<=5){
			if(printf("%d ",j++%3)){}
		}
		if(printf("\n",i++)){}
	}
}
1 2 0 1 2
2 0 1 2
0 1 2
1 2
2
*//*70
#include<stdio.h>
void main(int i,int j,int k){
	if(j=1){}
	while(i<=5){
		if(k=1){}
		while(j<=5){
			if(i==1||i==5){
				if(printf("%d ",k,j++)){}
				if(j<=3 && k++){}
				else if(k--){}
			}
			else if((i==3||j==3) && printf("3 ",j++)){}
			else if(printf("2 ",j++)){}
		}
		if(printf("\n",j=1,i++)){}
	}
}
1 2 3 2 1
2 2 3 2 2
3 3 3 3 3
2 2 3 2 2
1 2 3 2 1
*//*71
#include<stdio.h>
void main(int i,int j){
	if(i=5,j=1){}
	while(i>=1){
		while(j<=5){
			if(printf("%d ",i+j++)){}
		}
		if(printf("\n",j=1,i--)){}
	}
}
6 7 8 9 10
5 6 7 8 9
4 5 6 7 8
3 4 5 6 7
2 3 4 5 6
*//*72
#include<stdio.h>
void main(int i,int j){
	if(j=1){}
	while(i<=5){
		while(j<=5){
			if(j<=i&&(i==2||i==3)||(j<=2&&i==4)){
					if(printf(" ",j++)){}
				}else{
					if(printf("*",j++)){}
				}
		}
		if(printf("\n",j=1,i++)){}
	}
}
*****
  ***
   **
  ***
*****
*//*73
#include<stdio.h>
void main(int i,int j,int k,int m,int n,int t){
	if(j=1,k=3,m=-1,n=1){}
	while(i<=5){
		if(i>=2){
			while(k<=i){
				if(printf(" ",k++)){}
			}
		}
		if(j=i){}
		while(j<=5){
			if(t=m+n){}
			if(printf("%d ",t,j++)){}
			if(m=n,n=t){}
		}
		if(printf("\n",i++,k=3)){}
	}
}
0 1 1 2 3
5 8 13 21
 34 55 89
  144 233
   377
*//*74
#include<stdio.h>
void main(int i,int j){
	if(j=0){}
	while(i<=5){
		while(j<=4){
			if(i%2==1 && printf("%d ",j++%2)){}
			else if(printf("%d ",i%2,j++)){}
		}
		if(printf("\n",j=0,i++)){}
	}
}
0 1 0 1 0
0 0 0 0 0
0 1 0 1 0
0 0 0 0 0
0 1 0 1 0
*/














