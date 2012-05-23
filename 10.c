/** Non-constant pointer to constant integers; the integer at the location can not be changed. */

#include <stdio.h>

int main() {
	int a=1,b=2,c=3;
	const int *p; // Non-constant pointer to constant integers; the integer at the location can not be changed. 
	p=&a;

	int i;
	for (i=0; i < 3; ++i) {
		//*p=100*(*p);
		printf("p=%p\n", p);
		p++;
	}
	printf("a=%d, b=%d, c=%d\n", a,b,c);

	return 0;
}
