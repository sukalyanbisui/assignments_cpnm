//6. Write a C program to find out factorial of a given number.

#include<stdio.h>

int fact(int n){
 int fact = 1;
for(int i = 1 ; i<=n ;i++ ){
	fact = fact * i;
}
return fact;
}

int main(){
int n;
printf("enter a  number\n");
scanf("%d", &n);
printf("factorial is : %d\n" , fact(n));

return 0;
}
