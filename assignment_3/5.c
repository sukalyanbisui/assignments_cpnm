#include<stdio.h>


void sort(int arr[], int n){
 for(int i = 0 ; i <= n -1 ; i++){
	for( int j = 0; j<=n-i-1; j++){
         if(arr[j]>arr[j+1]){
         int temp = arr[j];
         arr[j] =  arr[j+1];
         arr[j+1] =  temp;
  }
  }
  }

}
 void print(int arr[], int n){
   for(int i = 0; i<=n ; i++){
   printf("%d\t" ,  arr[i]);
   }
printf("\n");
}

int main(){
 int n =10;

int arr[n];
for(int i = 0 ; i<= n ; i++){
    printf("Enter the elements of ther array: \n");
    scanf("%d" , &arr[i]);
}

sort(arr,n);
printf("the given array arranged in ascending order: ");
print(arr,n);
return 0;
}
