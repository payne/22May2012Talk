/** Non-Constant pointer to non-constant data */

#include <stdio.h>

int main() {
	int a=1,b=2,c=3;
	int *p; // Non-constant pointer to non-constant data
	p=&a;

	int i;
	for (i=0; i < 3; ++i) {
		*p=100*(*p);
		p++;
	}
	printf("a=%d, b=%d, c=%d\n", a,b,c);

	return 0;
}
