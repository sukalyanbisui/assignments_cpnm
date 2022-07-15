//12. Write a C program which accepts 100 integers and displays the counts of positives, negatives and zeros entered.

#include<stdio.h>

#include<math.h>


int main(){

  int limit,num , positive = 0,negative = 0 , zero = 0;
	printf("Enter the limit\n");
	scanf("%d" , &limit);
	printf("Enter %d numbers\n" ,limit);
	while(limit>0){
	scanf("%d", &num);
	if(num>0){
	positive++;
	}
	else if(num<0){
	negative++;
	}
	else{
 	zero++;
	}
	limit--;
}
 printf("The no of postive number is : %d\n" , positive);
 printf("The no of negative number is : %d\n" , negative);
 printf("The number og zeroes are :%d\n", zero);

return 0;
}

