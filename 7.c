/** Taking the address of a function. */

#include <stdio.h>
#include <assert.h>

// http://stackoverflow.com/questions/840501/how-do-function-pointers-in-c-work

int addInt(int n, int m) {
	return n+m;
}

int multInt(int n, int m) {
	return n*m;
}

int main() {

	int (*functionPtr)(int,int);
	
	functionPtr=addInt; 
	//QUESTION: FIND OUT WHY & IS NOT NEEDED
	//ANSWER: both are valid.  Thus spoke stack overflow...
	// http://stackoverflow.com/questions/258422/function-pointers-in-c-address-operator-unnecessary

	int sum=(*functionPtr)(2,3);
	printf("sum=%d\n", sum);
	assert(5==sum);

	// Wild and CRAZY!
	functionPtr=&multInt;
	sum=(*functionPtr)(2,3);
	printf("sum=%d\n", sum);
	assert(6==sum);

	return 0;
}

