#include<stdio.h>

int main(){
	int age;
	printf("Enter the age: ");
	scanf("%d\n", &age);
	
	printf("Age is : %d\n ", age);

	//pointer stores address of age
	int*ptr=&age;

	//direct access ptr will give address of age
	printf("Address of age that ptr storing: %p\n",ptr);
	
	// access to value store in ptr
	printf("Value stored in ptr: %d\n",*ptr); //value at address
	
	//address at ptr
	printf("Address  of ptr: %p\n",&ptr);

	//address of age variable
	printf("Address where actual value stored: %p\n",&age);
	
	return 0;
}