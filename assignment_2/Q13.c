/*13. Write a C program to print the first n numbers of the Fibonacci sequence. 
The Fibonacci sequence is constructed by adding the last two numbers of the sequence so far to get the next number in the sequence. 
The first and second numbers of the sequence are defined as 0 and 1. We get:
0, 1, 1, 2, 3, 5, 8, 13, 21…*/

#include<stdio.h>

#include<math.h>

int main(){
  int oldNum = 0, newNum = 1, fibNum = 1, maxNum;
  printf("enter up to .... ?\n");
  scanf("%d", &maxNum);
  oldNum = 0;
  newNum=1;
  fibNum = oldNum+newNum;
  printf("%d %d %d", oldNum,newNum,fibNum);
  for( ; ; ){
    oldNum = newNum;
    newNum=fibNum;
    fibNum=oldNum+newNum;
    if(fibNum>maxNum){
      printf(" ");
      exit(1);
    }
    printf(" %d ",fibNum);
  }
  
return 0;
}
