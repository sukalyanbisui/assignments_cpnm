//2. Write a C program to find out sum of digits of a given number.
#include<stdio.h>

int sum(int a,int b){
return a+b;

}
int main(){
int a,b;
printf("enter a and b number\n");
scanf("%d %d", &a,&b);
printf("%d\n" , sum(a,b));

return 0;
}