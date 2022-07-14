//6. Any character is entered through the keyboard; write a program to determine whether the character entered is a capital letter, a small case letter, a digit or a special symbol.

 #include<stdio.h>

int main(){
	
	char c;
	printf("Enter a character : \n");
	scanf("%c" , &c);
	if(c>=65 && c<= 90){
		printf("The given character is a capital letter\n");
		}
	else if(c>=97 && c<= 122){
		printf("The given character is a smallcase letter\n");
	}
	else if(c>=48 && c<= 57){
		printf("The given charactcer is a digit\n");
	}
	else if(c>=33 && c<= 47 || c>=58 && c<= 64 || c>=91 && c<= 96 || c>=123 && c<= 126){
		printf("The given character is a special symbol\n");
	}
	
	
return 0;
}
