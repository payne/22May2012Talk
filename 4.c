/** Simulating call-by-reference using pointers */
#include <stdio.h>

void swap(int *p, int *q) {
  int tmp = *p;
  *p = *q;
  *q = tmp;
}

int main() {
  int a=42, b=86;

  printf("a=%d b=%d\n", a,b);
  swap(&a,&b); 
  printf("a=%d b=%d\n", a,b);

  return 0;
}
  
