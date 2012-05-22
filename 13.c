/** qsort demo.  RTFM: man qsort */

#include <stdio.h>
#include <stdlib.h>

int mycompare(const void *a, const void *b) {
  int *ai = (int *) a;
  int *bi = (int *) b;
  int aValue = (int)*ai;
  int bValue = (int)*bi;
  return aValue-bValue;
}

void printAray(int *p,int nel) {
  int i;
  for (i=0; i < nel; ++i) {
    printf("%d ", *p);
    p++;
  }
  printf("\n");
}

int main() {
  int aray[]={7,2,9};
  int nel = 3;
  qsort(aray,nel, sizeof(int), mycompare);
  printAray(aray,nel);
  return 0;
}
