/** Pointers are very very very dangerous! */
// This is a silly demo.   Do not do this.

#include <stdio.h>

int main() {
  int a=1,b=2,c=3,d=4,e=5;

  long diff=(long) &a;
  diff -= (long) &e;
  printf("&a=%p &e=%p diff=%ld\n", &a, &e, diff);
	printf("WHY DOES THIS NOT MAKE SENSE?? \n"
				 "diff/sizeof(int)=%d\n", diff/sizeof(int));


  diff=(long) &b;
  diff -= (long) &c;
  printf("&b=%p &c=%p diff=%ld\n", &b, &c, diff);
	printf("diff/sizeof(int)=%d\n", diff/sizeof(int));

	// This next bit is a flashy demo and NOT a good practic!
  int *p; // p points to an int
  p=&a;   // Set p to point at e by taking the address of e
  int x;
  for (x=0; x < 5; ++x) {
    *p=100; // Change the value of the int pointed to by p to 100
            // *p is read "dereference p"... 
						// as in p is a referenc to an int
    p++;    // Make p point to the next int
  }

  printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);

  return 0;
}
