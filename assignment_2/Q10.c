/*10. Write a program to print the multiplication table of the number entered by the user. The table should get displayed in the following form.
29 * 1 = 29
29 * 2 = 58
... ... ...*/

#include<stdio.h>

#include<math.h>

int main(){
 int n,mult = 1;
 printf("enter a number\n");
scanf("%d" ,&n);

for(int i = 1 ; i<=10 ; ++i){
   mult = n * i ;
printf("%d * %d = %d\n", n, i ,mult);
}
return 0;
}
