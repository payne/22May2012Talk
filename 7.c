/** Taking the address of a function. */

#include <stdio.h>
#include <assert.h>

// http://stackoverflow.com/questions/840501/how-do-function-pointers-in-c-work

int addInt(int n, int m) {
	return n+m;
}

int main() {

	int (*functionPtr)(int,int);
	
	functionPtr=&addInt;

	int sum=(*functionPtr)(2,3);
	printf("sum=%d\n", sum);
	assert(5==sum);

	return 0;
}

