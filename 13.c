/** qsort demo.  RTFM: man qsort */

#include <stdio.h>
#include <stdlib.h>

int mycompare(const void *a, const void *b) {
	// Almost always need to cast to tell C what is in the void
  int *ai = (int *) a; 
  int *bi = (int *) b;
  int aValue = (int)*ai; // CAST is NOT NEEDED!
  int bValue = *bi;
  return aValue-bValue;
}

void printAray(int p[],int nel) { // or could say "int *p"
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
  /*void qsort(void *base, size_t nmemb, size_t size,
                  int(*compar)(const void *, const void *));
	*/
  qsort(aray,nel, sizeof(int), &mycompare); // consistent with 7.c
  printAray(aray,nel);
	// Holy #Q@$!!!  Why does it work BOTH WAYS!!!???
  qsort(aray,nel, sizeof(int), mycompare); // consistent with 7.c
  printAray(aray,nel);

	// BECAUSE (sorry, it's lame) pointers are
	// VERY VERY VERY DANGEROUS!!!
  return 0;
}
