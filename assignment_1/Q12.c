/*12. If the marks obtained by a student in five different subjects are input through the keyboard, find out the aggregate marks and percentage marks obtained by the student. Also determine the number grade. Assume that the maximum marks that can be obtained by a student in each subject is 100. Grade A = 91 to 100, B = 81 to 90, C = 71 – 80, D = 61 to 70, E = 51 to 60, F = less than 50.
 Input error should be checked.*/

 #include<stdio.h>

int main(){
	 int a,b,c,d,e,f;
	printf("enter marks of first subject : \n");
	scanf("%d" ,  &a);
	printf("enter marks of second subject : \n");
	scanf("%d" ,  &b);
	printf("enter marks of third subject : \n");
	scanf("%d" ,  &c);
	printf("enter marks of fourth subject : \n");
	scanf("%d" ,  &d);
	printf("enter marks of fifth subject : \n");
	scanf("%d" ,  &e);
	 if( a <= 100 && b <=  100  && c <= 100 &&  d <= 100 && e <= 100){
			int ag = a+b+c+d+e;
			float per = ((float)ag/500) * 100;
			printf("Aggregate marks : %d \n" , ag);
			printf("Percentage Marks : %0.2f \n" , per);
			if(91<= per && per <=100){
			printf("Grade : A\n");
			}
			else if(81<= per && per <=90){
			printf("Grade : B\n");
			}
			else if(71<= per && per <=80){
			printf("Grade : C\n");
			}
			else if(61<= per && per <=70){
			printf("Grade : D\n");
			}
			else if(51<= per && per<=60){
			printf("Grade : E\n");
			}
			else if(per<= 50){
			printf("Grade : F\n");
			}
	}
	else{
	printf("invalid input \n");	
		
	}
	
return 0;
}
