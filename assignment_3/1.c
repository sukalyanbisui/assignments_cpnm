#include <stdio.h>
#include <stdlib.h>

int main(){int n = 6;
    int arr[6]= {9, 8, 7, 2, 4, 3};
    printf("enter elemnts of the array\n");
   /* for(int j=0; j <n; j++){
        scanf("%d ", &arr[i]);
    }*/
    int temp;
    for(int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i = 0; i < n; i++){
        printf("%d,", arr[i]);
    }
}