//8. Write a C program to find out sum of the following series. S = 1@ + 2@ + 3@ + 4@ + … + n@.
//where, n@ is the sum of all factors of n. Example: 6@ = 1+2+3+6 = 12

#include<stdio.h>

int sum_of_factors(int n){
int sum = 0;
  for(int i = 1 ; i<=n ; i++){
	if(n%i==0){
	sum = sum +i;
}
}
return sum;

}

int main(){
int n,ans = 0;
printf("enter a  number\n");
scanf("%d", &n);
for(int j = 0 ; j<=n ; j++){
	ans = ans + sum_of_factors(n);
}
printf("%d\n" , ans);

return 0;
}
