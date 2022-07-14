//4. Any year is input through the keyboard. 
//Write a program to determine whether the year is a leap year or not. (Hint: Use the % (modulus) operator)
#include<stdio.h>

int main(){
	 int n;	
	printf("enter year\n");
	scanf("%d" , &n);
	if(n%100 == 0){
	printf("not leap year\n");
	}
else if(n%400 == 0){
	printf(" leap year\n");
	}
	else if(n%4 == 0){
	printf(" leap year\n");
	}
 else{
	printf("not leap year\n");
   }
return 0;
}
