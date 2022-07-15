//11. Write a menu driven program to accept a number in any Number System [from Binary, Decimal, Octal, and Hex] and convert and display the same in any other amongst these.

#include<stdio.h>
#include<math.h>
void Convert(){
    //binary_to_decimal
int n;
scanf("%d",&n);
int a=0,i=0,s;
while(n!=0){
s=n%10;
n/=10;
a+=s*pow(2,i);
++i;

}
printf("%d\n",a);
}
void Convert1(){
int n;
scanf("%d",&n);
int s,i=1,t=0;
while(n!=0){
s=n%2;
n/=2;
t=s+s*i;
i*=10;


}
printf("%d\n",t);
}


int main(){
int n,b;
printf("Choose the option\n");
printf("1. Convert BInary to Decimal\n");
printf("2. Convert Decimal to Binary\n");
scanf("%d",&b);
switch(b)
{
case 1:
Convert();
break;

case 2:
Convert1();
break;

default:
printf("Wrong Choice");
}


}