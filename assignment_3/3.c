#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>



int main()
{
    int a[3][3],b[3][3],i,j,k,add[3][3],mul[3][3],dif[3][3];
     
      printf("Enter the elements of the first matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Print the first matrix\n");
for(i=0;i<3;i++){
        for(j=0;j<3;j++){
           printf("%d ",a[i][j]);
        }
        printf("\n");
    }

      printf("Enter the elements of the second matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d", &b[i][j]);
        }
    }
    printf("Print the second matrix\n");
for(i=0;i<3;i++){
        for(j=0;j<3;j++){
           printf("%d ",b[i][j]);
        }
        printf("\n");
    }

int c;
  printf("select the operation:\n");
  printf("1.For addition press 1\n");
  printf("2.For subtraction press 2\n");
  printf("3.For multiplication press 3\n");

  scanf("%d", &c);

  if(c==1){
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            add[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("output: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",add[i][j]);
        }
        printf("\n");
    }
fflush;
  }

  else if(c==3){
    for(i=0; i<3;i++){
        mul[3][3] = 0;
        for(j=0;j<3;j++){
            mul[i][j] = 0;
            for(k=0; k<3;k++){
                mul[i][j] = mul[i][j] + a[i][k] * b [k][j];
            }
        }
    }  
   printf("output: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
    }

else if(c == 2){
 for(i=0; i<3;i++){
    for(j=0;j<3;j++){
        dif[i][j] = a[i][j] - b[i][j];
    }
 }

  for(i=0; i<3;i++){
    for(j=0;j<3;j++){
        printf("%d ", dif[i][j]);
    }
    printf("\n");
 }





}





return 0;
}