//7. Write a program which accepts two number X, Y and creates a third number Z by appending Y after X. 
//Example: if X=12 and Y=345 then Z=12345

#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int combine(int x, int y){
	int t = 1;
	while(t<=y){
		t *= 10;
	}
	return x * t + y;
}

int main(){
  int x,y,z,times = 1;
  printf("enter the first number: ");
  scanf("%d" , &x);
   printf("enter the second number: ");
  scanf("%d" , &y);
  z = combine(x,y);
  printf("The third number is %d\n", z);


return 0;
}


