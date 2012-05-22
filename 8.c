/** Associate right to left: (*p)++ vs *p++ */

#include <stdio.h>

long diff(int *x, int *y) {
	long lx=(long)x;
	long ly=(long)y;
	return lx-ly;
}

int main() {
	int a=1,b=2,c=3,d=4,e=5;
	int *p, *pOld;

	p=&a;
	pOld=p;
	int value = (*p)++;
	printf("value=%d a=%d p=%p pOld=%p diff=%ld\n",
		value,a,p,pOld,diff(p,pOld));

	pOld=p;
	value = *p++;
	printf("value=%d a=%d p=%p pOld=%p diff=%ld\n",
		value,a,p,pOld,diff(p,pOld));

	return 0;
}
