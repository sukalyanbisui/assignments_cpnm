#include<stdio.h>



int main(){
int n;
printf("enter n");
scanf("%d", &n);
int std1[n];
int std2[n];
int std3[n];
int std4[n];
int std5[n];
int tot1=0;
int tot2=0;
int tot3=0;
int tot4=0;
int tot5=0;

//taking input
for(int i = 0 ; i<=n ;i++){
    printf("Enter marks for five subjects for student 1 : \n");
    scanf("%d", &std1[i]);
   
 }


for(int i = 0 ; i<=n ;i++){
    printf("Enter marks for five subjects for student 2 : \n");
    scanf("%d", &std2[i]);
	
  
 }


for(int i = 0 ; i<=n ;i++){
    printf("Enter marks for five subjects for student 3 : \n");
    scanf("%d", &std3[i]);

 }


for(int i = 0 ; i<=n ;i++){
    printf("Enter marks for five subjects for student 4 : \n");
    scanf("%d", &std4[i]);

 }


for(int i = 0 ; i<=n ;i++){
    printf("Enter marks for five subjects for student 5 : \n");
    scanf("%d", &std5[i]);

 }

//total calculation
for(int i = 0 ; i<=n ;i++){
    tot1 = tot1 + std1[i];
    }
for(int i = 0 ; i<=n ;i++){
    tot2 = tot2 + std2[i];
    }
for(int i = 0 ; i<=n ;i++){
    tot3 = tot3 + std3[i];
    }
for(int i = 0 ; i<=n ;i++){
    tot4 = tot4 + std4[i];
    }
for(int i = 0 ; i<=n ;i++){
    tot5 = tot5 + std5[i];
    }

int arr[5];
arr[0] = tot1;
arr[1] = tot2;
arr[2] = tot3;
arr[3] = tot4;
arr[4] = tot5;
int  max = 0;
for(int i = 0 ; i<=n; i++){
   if(arr[i]>=max){
    max = arr[i]; 
}
}
fflush;
printf("The highest total marks is : %d\n", max);











return 0;
}
