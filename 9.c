/** Non-Constant pointer to non-constant data */

#include <stdio.h>

int main() {
	int a=1,b=2,c=3;
	int *p; // Non-constant pointer to non-constant data
	p=&a;

	// Taking advantage of a, b, and c being next to each 
	// other in RAM is a parlor trick and NOT A GOOD PRACTICE!
	// Remember!  Pointers are very very very dangerous
	int i;
	for (i=0; i < 3; ++i) {
		*p=100*(*p);
		p++;
	}
	printf("a=%d, b=%d, c=%d\n", a,b,c);

	return 0;
}
