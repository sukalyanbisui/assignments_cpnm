/*1. Write a C program which accepts basic salary as input and prints the gross salary, 
which is sum of the basic, dearness allowance (60% of basic salary), 
and house rent allowance (15% of basic salary).*/


#include<stdio.h>

int main(){
	int basic; 
	float gross,da,hra;
	printf("enter basic salary : \n");
	scanf("%d" , &basic);
        da = 0.6 * basic ;
	hra = 0.15 * basic;
	gross = basic + da  + hra ;
	printf("%0.2f" , gross);
	
	
return 0;
}