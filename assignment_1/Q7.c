//7. Write a program which accepts two number X, Y and creates a third number Z by appending Y after X. 
//Example: if X=12 and Y=345 then Z=12345

#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main(){
  int x = 12;
 int y = 345;
  int count = 0;
 while(y>0){
	 y = y % 10;
	count++;
	y /= 10;			
	
}
 int d = x*pow(10,count) + y;
 printf("%d",d);
return 0;
}



