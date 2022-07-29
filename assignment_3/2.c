#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

void printDistinct(int arr[], int n)
{
    // Pick all elements one by one
    for (int i=0; i<n; i++)
    {
        // Check if the picked element is already printed
        int j;
        for (j=0; j<i; j++)
           if (arr[i] == arr[j])
             break;
 
        // If not printed earlier, then print it
        if (i == j)
          printf("%d\n",arr[i]);
    }
}

int counter(int arr[], int size){
   int count =0;
   for( int i =0 ; i<size; i++){
    for(int j = 0 ; j <size; j++){
        if(arr[i]==arr[j]){
            count++;
            break;
        }
    }
   }
   return count;
}


int main()
{

int size;
printf("Enter size of the array\n");
scanf("%d", &size);
int arr[size];
printf("Enter the elements of the array\n");
for(int i =0 ;i<size;i++){
    scanf("%d", &arr[i]);
    }
printf("print the array\n");
for(int i =0 ;i<size;i++){
    printf("%d\n", arr[i]);
    }
printf("\n");
 printDistinct(arr, size);
 printf("%d", counter(arr,size));


return 0;
}