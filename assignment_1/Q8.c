/*8. Accept three integer numbers and find their average. 
Next, display which numbers are below and above the average value.*/

 #include<stdio.h>

int main(){
	int a,b,c,avg;
	printf("enter first number : \n");
	scanf("%d" , &a);
	printf("enter second number : \n");
	scanf("%d" , &b);
	printf("enter third number : \n");
	scanf("%d" , &c);
	avg = (a + b + c )/3;
	printf("average of three numbers is : %d\n" ,avg);
	
	
	if(avg <= a && avg >= b && avg >= c){
	printf(" %d is greater than %d\n" , a ,avg);
	printf(" %d is lesser than %d\n" , b ,avg);
	printf(" %d is lesser than %d\n" , c,avg);
	}
	
  	else if(avg <= b && avg >= a && avg >= c){
	printf(" %d is greater than %d\n" , b  ,avg);
	printf(" %d is lesser than %d\n" , a,avg);
	printf(" %d is lesser than %d\n" , c,avg);
	}
	
	else if(avg <= c && avg >= a && avg >= b){
	printf(" %d is greater than %d\n" , c  ,avg);
	printf(" %d is lesser than %d\n" , a,avg);
	printf(" %d is lesser than %d\n" , b,avg);
	}
	
	else if(avg <= b && avg <= a && avg >= c){
	printf(" %d is greater than %d\n" , a  ,avg);
	printf(" %d is greater than %d\n" , b,avg);
	printf(" %d is lesser than %d\n" , c,avg);
	}
	
	else if(avg <= b && avg <= c && avg >= a){
	printf(" %d is greater than %d\n" , b ,avg);
	printf(" %d is greater than %d\n" , c,avg);
	printf(" %d is lesser than %d\n" , a,avg);
	}
	
	else if(avg <= a && avg <= c && avg >= b){
	printf(" %d is greater than %d\n" , a ,avg);
	printf(" %d is greater than %d\n" , c,avg);
	printf(" %d is lesser than %d\n" , b,avg);
	}
	
	
return 0;
}
