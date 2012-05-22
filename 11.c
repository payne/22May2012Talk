/** Constant pointer to non-constant integer; the integer can be changed but the pointer can not be changed. */

#include <stdio.h>

int main() {
	int a=1,b=2,c=3;
	int * const p=&a; // Constant pointer to non-constant integer; the integer can be changed but the pointer can not be changed. */
	// WHY does this not work??  
	// p=&a;

	int i;
	for (i=0; i < 3; ++i) {
		*p=100*(*p);
		printf("p=%p\n", p);
		//TRY THIS: 
		//p++;
	}
	printf("a=%d, b=%d, c=%d\n", a,b,c);

	return 0;
}
