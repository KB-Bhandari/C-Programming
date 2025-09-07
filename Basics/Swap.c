#include<stdio.h>

	void swap(int a, int b){
	int t=a;
	a=b;
	b=t;
	printf("Swapping: %d %d\n",a,b);
	}

	void swapping(int *a, int *b){
	int t=*a;
	*a=*b;
	*b=t;
	printf("Swapping: %d %d\n",*a,*b);
	}
	

	void main(){
	int a=2;
	int b=4;
	swap(a,b);
	printf("Called by value ");
	printf("After swapping:%d %d\n", a,b); // values remain unchanged

	swapping(&a,&b);
	printf("Called by reference ");
	printf("After swapping:%d %d\n", a,b); // values changes

}
