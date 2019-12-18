#include<stdio.h>
#include<stdlib.h>
//fibonacci sequence and golden ratio approximation
int fib (int n){
	{
	if (n<=1)
	return n;
	else 
	return ( fib(n-1)+fib(n-2) );
	}
}

void golden (float n){
	float prev=0;
	if (n>0){
	prev=fib(n-1);
	float gr = ( fib(n)/ prev );
	printf ("Golden Ratio Approx = %d/%.0f = %f \n\n", fib(n), prev, gr);
	}
}

int main(){
	int i,k;
	printf ("Enter An Integer:  ");
	scanf("%d", &k);
	if ((k>40) || (k<1)){
		k=40;
	}
	for (i=1;i<=k;i++){
		printf ("Fibonacci(%d) = %d\n", i, fib(i));
		golden(i);
	}
	getchar();
	return 0;
}
