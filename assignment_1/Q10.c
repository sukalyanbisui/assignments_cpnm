//10. Write a program to check whether a triangle is valid or not, when (i) the three angles of the triangle are entered through the Keyboard (ii) three sides of the triangle are entered through the keyboard.

 #include<stdio.h>

int main(){
	 int a,b,c,d,e,f;
	printf("enter three angles of a triangle :\n");
	scanf("%d %d %d" , &a ,&b ,&c);
	printf("enter three sides of a triangle :\n");
	scanf("%d %d %d" , &d ,&e ,&f);
	if(a+b+c == 180){
	printf("Valid Triangle\n");	
	}
	else{
	printf("Not valid Triangle\n");
	}
	if(a+b>c && b+c>a && a+c>b){
	printf("Valid Triangle\n");	
	}
	else{
	printf("Not valid Triangle\n");
	}
  



	
	
return 0;
}
