/** What's wrong with this code? */

#include <stdio.h>

int add_it(int a[ ] ) {
  int result=0;
  int i;
  int sizeof_a = sizeof(a);
	int sizeof_a_first_element = sizeof(a[0]);
	printf("sizeof_a=%d sizeof_a_first_element=%d\n",  
		sizeof_a, sizeof_a_first_element);

  for (i=0; i < sizeof(a) / sizeof(a[0]); i++) {
    printf("a[%d]=%d\n", i, a[i]);  
    result += a[i];
  }
  return result;
}

int main() {
  int aray[]={4,5,6,7,8};
  int sum=add_it(aray);

  printf("sum=%d\n", sum);
  return 0;
}
  
