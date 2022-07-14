//9. Find the maximum and minimum of three numbers.
#include<stdio.h>
int main(){
	
	int a,b,c;
	printf("enter first number : \n");
	scanf("%d" , &a);
	printf("enter second number : \n");
	scanf("%d" , &b);
	printf("enter third number : \n");
	scanf("%d" , &c);
	if(a>b && a>c && c > b){
	printf("%d is maximum\n" , a );
	printf("%d is minimum\n" , b );
	}
	
  	else if(a>b && a>c && b > c){
		printf("%d is maximum\n" , a );
		printf("%d is minimum\n" , c );
	}
	else if(a<b && c<b &&  a>c ){
		printf("%d is maximum\n" , b );
		printf("%d is minimum\n" , c );
	}
	else if(a<b && c<b &&  c>a ){
		printf("%d is maximum\n" , b );
		printf("%d is minimum\n" , a );
	}
	else if(a<c && b<c &&  c>a ){
		printf("%d is maximum\n" , c );
		printf("%d is minimum\n" , a );
	}
	else if(a<c && b<c &&  a>b ){
		printf("%d is maximum\n" , c );
		printf("%d is minimum\n" , b );
	}
	
return 0;
}
