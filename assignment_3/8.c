#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>



int main()
{
   int row,col,tran[10][10],a[10][10];
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
       tran[j][i] = a[i][j];
    }
    
  }

  printf("enter the transpose : \n");
 for(int i =0 ;i<row;i++){
    for(int j =0 ; j <col;j++){
        printf("%d ", tran[i][j]);
    }
    printf("\n");
  }



return 0;
}