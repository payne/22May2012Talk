/** Pointer arithmetic: a[i] is really &a[0] + i * sizeof(a[0]) */
#include <stdio.h>
#include <assert.h>

// Why void?
int really(void *p, int i, int sz) {
	void *pCalculated;
	pCalculated = p + i*sz;
	int *pi;
	pi = (int*) pCalculated;
	return *pi;
}

int main() {
	int aRay[]={1,2,3,4,5}, len=5,i;
	
	for (i=0; i < len; ++i) {
		printf("%d=aRay[%d]==really(&aRay[0],i,sizeof(aRay[0]))=%d\n",
			aRay[i],i,really(&aRay[0],i,sizeof(aRay[0])));
		assert(aRay[i]==really(&aRay[0],i,sizeof(aRay[0])));
	}

	return 0;
}


