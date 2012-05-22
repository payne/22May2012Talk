/** Arrays of pointers */
#include <stdio.h>

int main(int argc, char *argv[]) {
  char *days[] = { "sun", "mon", "tue", "wed", "thu", "fri", "sat" };

  printf("This is an array of seven pointers to strings.\n");
  int i;
  for (i=0; i < 7; ++i) {
    printf("\t%s\n", days[i]);
  }
  return 0;
}
