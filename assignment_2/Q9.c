//9. Write a C program which prints all prime numbers between 1 and 100.
//Write a program which accepts a number n and prints all prime factors of n.

#include<stdio.h>

#include<math.h>

int main(){
 int i, num,count= 0;
	
for(num = 1 ; num <=100 ; num++){
count = 0;
for( i = 2 ; i <=num/2 ; i++){
if(num%i == 0){
	count++;
	break;
}
}

if(count == 0 && num != 1){
	printf("%d " , num);
}
}
return 0;
}
