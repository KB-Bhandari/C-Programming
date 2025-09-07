#include<stdio.h>
	
	int callByValue(int n){
		n=8;
	}
	
	int callByReference(int *n){
		*n=89;
	}


	int main(){
		int a=5;
		int b=1;
		
		callByValue(a);
		callByReference(&b);

		printf("Call by Value: %d\n",a);
		printf("Call by Reference: %d\n",b);
		return 0;
			
	}