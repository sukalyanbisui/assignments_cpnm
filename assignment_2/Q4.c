//4. Write a C program to find out sum of the following series.  S=1+2+3+4+ ... +n

#include<stdio.h>

int sum(int n){
int sum = 0;
for(int i = 1 ; i<=n ; i++){
sum = sum + i ;
}
return sum;
}
int main(){
int n;
printf("enter a  number\n");
scanf("%d", &n);
printf("%d\n" , sum(n));

return 0;
}
