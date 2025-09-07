#include<stdio.h>

int main(){

	//read integer
	int age;
	printf("Enter the age: ");
	scanf("%d", &age);
	
	printf("Age is : %d \n", age);

	//read character
	char ch;
	printf("Enter a character: ");
	scanf(" %c", &ch);
	printf("The Character is :%c\n ",ch);

	//read the String
	char msg[100];   //declare an array to hold input string
	printf("Enter the message: ");
	scanf(" %[^\n]",&msg);
	printf("The message is :%s\n", msg);
	
	while(getchar()!='\n');  //clear buffer before fgets
	//using fgets() to read string
	char s[100];
	printf("Enter the message: ");

	fgets(s,sizeof(s),stdin);
	printf("Message is: %s", s);
	


	return 0;
}