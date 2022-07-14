/*5. Given as input an integer number of seconds; write a program to print as output the equivalent time in hours, minutes, and seconds. 
Recommended output format is something like 7322 seconds is equivalent to 2 hours 2 minutes 2 seconds*/
//imp
 #include<stdio.h>

int main(){
	 int t,h,m,s;
printf("Enter time in seconds :\n");
scanf("%d" , &t);
 h = t / 3600;
 m = (t - (h*3600))/60;
s = (t - (3600*h) - (m*60));
printf("H : M : S : %d : %d : %d\n" , h,m,s);
return 0;
}