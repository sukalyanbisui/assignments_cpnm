/*16. Write a C program that prints the following patterns for the input of n=4. The value of n is input by the user.
   1
  121
 12321
1234321
*/
#include<stdio.h>
#include<math.h>

int main(){
    int n,i,j,k;
    printf("Enter a number : \n");
    scanf("%d" , &n);
    for(i = 1; i<=n;i++){
        for(j= n-1;j>=i;j--){
            printf(" ");
        }
    for(k = i -1 ; k >= 1 - i; k--){
        printf("%d" , i - abs(k));
    }
    printf("\n");
    }
    return 0;
}
