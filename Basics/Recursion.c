#include<stdio.h>
	void recursion(int n){
		if(n==6){
		return;
		}
		printf("%d\n",n);
		recursion(n+1);
		
		}
		
	int main(){
	int n=1;
	recursion(n);
	return 0;
	}

	
