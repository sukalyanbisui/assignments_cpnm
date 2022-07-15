//7. C program to find out sum of the following series. S=1!+2!+3!+4!+ ... +n!

#include<stdio.h>
int add(int num)
{
	int i,j,fact,sum=0;
	for(i=1;i<=num;i++)//loop for finding factorial and sum
	{
		fact=1;
		/*if(i!=num)
			printf("%d!+ ",i);
		else
			printf("%d!= ",i);*/
		for(j=1;j<=i;j++)
		fact=fact*j;
		sum=sum+fact;
	}
	return sum;
}
int main()
{
	int num;
	printf("Enter the last number of series:\n");
	scanf("%d",&num);//last number of series
	printf("%d",add(num));
	return 0;
}