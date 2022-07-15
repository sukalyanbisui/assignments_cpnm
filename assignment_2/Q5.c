//5. Write a C program to find out sum of the following series. S=1.2+2.3+3.4+4.5+ ... +n.(n+1)

#include<stdio.h>

int sum(int n){
int sum = 0, ans = 1;
for(int i = 1 ; i<=n ; i++){
sum = sum + i* (i+1);
;
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
