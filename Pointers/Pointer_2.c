#include<stdio.h>
	
	//call by value
	void square(int n){
	n*=n;   // change happens in copy of argument O/P=16
	printf("Call by value\n");
	printf("Square: %d\n",n);
	}

	//call by reference
	void sq(int *n){
	(*n)*=(*n);	// changes happened at address ,so  its permanent change the value of n (ie. num)
	printf("Call by Reference\n");
	printf("Square: %d\n", *n);
	}

 int main(){
	int num=4;
	square(num);
	printf("Number after call by value: %d\n",num); // actual value remain unchanged O/P= 4

	sq(&num); // passed address of num
	printf("Number after call by reference: %d\n",num); //actual value also get changed O/P= 16
}