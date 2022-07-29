#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

 int max(int arr[], int n){
   int max = arr[0];
   for(int i=0; i<n;i++){
    if(arr[i]>max){
        max = arr[i];
    }
    
   }
 return max;

 }

 int min(int arr[],  int n){
    int min = arr[0];
    for(int i=0; i<n;i++){
    if(arr[i]<min){
        min = arr[i];
    }
    
   }
 return min;
 }


int main()
{   
    int n ;
    printf("enter n\n");
    scanf("%d" , &n);
 int arr[n];
 for( int i = 0; i<n; i++){
    scanf("%d", &arr[i]);
 }

printf("The maximum number is : %d\n",max(arr,n));
printf("The minimum number is : %d\n",min(arr,n));
printf("the range is %d", max(arr,n)- min(arr,n));
return 0;
}