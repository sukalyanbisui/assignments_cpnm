//15. Write a program to find the octal equivalent of the entered integer.
 #include<stdio.h>
 int octal(int n){
    int oct = 0,rem =0,place = 1;

    while(n>0){ 
        rem = n % 8;
        oct = oct  + rem * place;
        n /= 8;
        place *=10;

    }
    return oct;
 }
 int main(){
    int n;
    printf("enter a number: \n");
    scanf("%d" , &n);
    printf("The octal equivalent of the given number is : %d", octal(n));
 }