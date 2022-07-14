/*2. A cashier has currency notes of denominations 10, 50 and 100. 
Write a C program, which accepts an amount to be withdrawn, 
and prints the total number of currency notes of each denomination the cashier will have to give to the withdrawer.*/
//imp
 #include<stdio.h>

int main(){
	int n,x,y,z;
printf("enter the amount to be withdrawn : \n");
scanf("%d" , &n);
x = n / 100;
n = n % 100;
y = n / 50;
n = n % 50;
z = n / 10;

printf("No of 100 rupee notes : %d\n" , x);
printf("No of 50 rupee notes : %d\n" , y);
printf("No of 10 rupee notes : %d\n" , z);

	
	
return 0;
}
