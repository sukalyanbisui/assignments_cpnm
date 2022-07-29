#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>



int main()
{
   int row,col,tran[10][10],temp,a[10][10];
   printf("enter no of rows: \n");
   scanf("%d", &row);
   printf("enter no of columns: \n");
   scanf("%d", &col);

printf("Enter elements of the matrix: \n");
  for(int i =0 ;i<row;i++){
    for(int j =0 ; j <col;j++){
        scanf("%d", &a[i][j]);
    }
  }

printf("enter the printed matrix: \n");
 for(int i =0 ;i<row;i++){
    for(int j =0 ; j <col;j++){
        printf("%d ", a[i][j]);
    }
    printf("\n");
  }

 for(int i =0 ;i<row;i++){
    for(int j =0 ; j <col;j++){
       temp = a[i][j];
       a[i][j] = a[j][i];
       a[j][i] = temp;
    }
    
  }

  printf("enter the transpose : \n");
 for(int i =0 ;i<row;i++){
    for(int j =0 ; j <col;j++){
        printf("%d ", a[j][i]);
    }
    printf("\n");
  }



return 0;
}