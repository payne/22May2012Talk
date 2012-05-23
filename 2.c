/** A pointer to an integer, and an integer */
#include <stdio.h>

int main() {
  int *p, q;
  p = &q; // p gets the address of q -- p points at q
  *p=42;  // The integer pointed to by p gets the value 42
  printf("q=%d p=%p &q=%p *p=%d\n", q,p,&q, *p);
  q=86; // *p referes to the same location as q
  printf("q=%d p=%p &q=%p *p=%d\n", q,p,&q, *p);
  return 0;
}
  
