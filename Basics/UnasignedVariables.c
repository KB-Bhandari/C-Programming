#include<stdio.h>
	//no assigned variables and pointer
	
	void localVariable(){
	int i;
	printf("unasigned local variable: %d\n", i);  // garbage value
	}
	int a;
	int *x;  
	int main(){
	
	int* p; 
	localVariable();
	printf("unasigned global pointer (value at address): %d\n", x);
	printf("unasigned global variable: %d\n", a); // give 0
	printf("unasigned local pointer: %d\n", p); // garbage value
	printf("unasigned global pointer: %d\n", x); // gives 0
	printf("unasigned local pointer (value at address): %d\n", *p); //garbage value
	
	return 0;
	}
	
	