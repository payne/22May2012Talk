/** Pointers are very very very dangerous! */
// This is a silly demo.   Do not do this.

#include <stdio.h>

int main() {
  int a=1,b=2,c=3,d=4,e=5;

  printf("&a=%p &e=%p\n", &a, &e);
  int *p;
  p=&e;
  int x;
  for (x=0; x < 5; ++x) {
    *p=100;
    p++;
  }

  printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);

  return 0;
}
