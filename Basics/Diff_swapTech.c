 #include<stdio.h>

	void Swap_WithoutTempVar(int a,int b){
		//using addition and subtraction
		a=a+b;   //2+3=5
		b=a-b;	// 6-3=2 i.e b=2
		a=a-b;	//5-2=3  i.e a=3
		printf("Swapping done: a=%d and b=%d\n",a,b);
	}

	void Swap_usingBitwiseXOR(int a,int b){
		//bitwise XOR- returns 1 when corresponding values are different
		//bitwise values of a=2 =0010 and b=3 =0011
		a=a^b;	// 0001 =1
		b=a^b;	// 0010 =2 i.e b=2
		a=a^b;	// 0011 =3  i.e a=3
		
		printf("Swapping done: a=%d and b=%d\n",a,b);
	}
	int main(){
		
		int a=2;
		int b=3;
		printf("Swap a= %d and b= %d\n",a,b);
		Swap_WithoutTempVar(a,b);
		Swap_usingBitwiseXOR(a,b);


	}