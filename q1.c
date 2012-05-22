/** What's wrong with this code? */

#include <stdio.h>

int add_it(int a[ ] ) {
  int result=0;
  int i;
  for (i=0; i < sizeof(a) / sizeof(a[0]); i++) {
    printf("a[%d]=%d\n", i, a[i]);  
    result += a[i];
  }
  return result;
}

int main() {
  int aray[]={4,5,6};
  int sum=add_it(aray);

  printf("sum=%d\n", sum);
  return 0;
}
  
