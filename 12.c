/** Neither the pointer nor the integer it points at can be changed. */


#include <stdio.h>

int main() {
	int a=1,b=2,c=3;
	// Neither the pointer nor the integer it points at can be changed. 
	const int * const p=&a; 
  // WHY?
  //p=&a;

	int i;
	for (i=0; i < 3; ++i) {
		//WHY?
		//*p=100*(*p);
		printf("p=%p\n", p);
		// WHY?
		//p++;
	}
	printf("a=%d, b=%d, c=%d\n", a,b,c);

	return 0;
}
