/** You can take the address of a string */
#include <stdio.h>

int main() {
  char *p;

  p="I like eggs";
  printf("*p='%c'\n", *p);
  printf("p='%s'\n", p);
  printf("p='%s'\n", p+2);
  return 0;
}
  
