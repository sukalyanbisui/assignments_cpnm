//11. Develop a C program that accepts the coefficients of a Quadratic equation and determines whether the roots of the quadratic equations are real or imaginary.
//[Use the formula d = b2 – 4ac]

 #include<stdio.h>

int main(){
	  int a,b, c, quad;
  		
	printf("enter coefficients of quadratic equation a, b ,c \n");
	scanf("%d %d %d" , &a ,&b ,&c);
	quad = b*b - 4*a*c;
	if(quad >= 0){
	 printf("Real Roots\n");
	}
	else if(quad<0){
	printf("Imaginary Roots\n");
	}

	
	
return 0;
}
