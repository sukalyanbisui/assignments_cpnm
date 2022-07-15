//3. Write a C program to find the reverse of a given number.
#include<stdio.h>

int sum(int n){
int reverse = 0,remainder; 
while(n>0){
 int remainder = n %10;
reverse = reverse*10 + remainder;
n/=10; 
}
return reverse;
}

int main(){

int n;
printf("Enter a number\n");
scanf("%d" ,&n);
int c = sum(n);
printf("%d",c);


return 0;
}
