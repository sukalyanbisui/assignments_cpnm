/*1. Write a C program which prints all integers divisible by n between 1 and 100 where value of n is provided by the user.*/

#include<stdio.h>

int main(){

 int n;
printf("Enter a number\n");
scanf("%d", &n);
for(int i =1 ; i<=100 ;i++){
if(i%n==0){
printf("%d ", i);
}
}



return 0;
}