/** Associate right to left: (*p)++ vs *p++ */

#include <stdio.h>
#include <assert.h>

long diff(int *x, int *y) {
	long lx=(long)x;
	long ly=(long)y;
	return lx-ly;
}

int main() {
	int a=100,b=200,c=300,d=400,e=500;
	int *p, *pOld;

	p=&a;
	pOld=p;
	// a is 100
	// *p happens first due to ( ) 
	// so value will be 100
	// After the derefernce to get the value,
	// we post increment the thing ("a") being referenced
	int value = (*p)++;
	printf("value=%d a=%d p=%p pOld=%p diff=%ld\n",
		value,a,p,pOld,diff(p,pOld));
	assert(100==value);
	//assert(101=value);

	assert(101==a);
	value = ++(*p);
	printf("value=%d a=%d p=%p pOld=%p diff=%ld\n",
		value,a,p,pOld,diff(p,pOld));
	assert(102==value);


	pOld=p;
	value = *p++;
	printf("value=%d a=%d p=%p pOld=%p diff=%ld\n",
		value,a,p,pOld,diff(p,pOld));
	//FAILS: assert(200==*p); // Compiler specific code!!  DANGER WILL ROBINSON!!!
	//FAILS: assert(&b==p); // Compiler specific code!!  DANGER WILL ROBINSON!!!
	// Really not a non-compiler specific way???
	// This is a nice idea!  Put it back and check...
	p--;
	assert(&a==p); // NICE!
	// So, we know that *p++ ended up incrementing the POINTER
	// and not the thing being referenced (pointed at)

	return 0;
}
