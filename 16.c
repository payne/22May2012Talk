/** Pointer arithmetic: p+6 is really p+(6*sizeof(*p)) */

#include <stdio.h>

long diff(void *a, void *b) {
	long al = (long) a;
	long bl = (long) b;
	return al - bl;
}

void voidDemo(void *p) {
	void *pOld;
	pOld=p;
	p+=6;
	printf("p=%p pOld=%p diff=%ld\n", p,pOld,diff(p,pOld));
}

void	charDemo() {
	char *cp,*cpOld;
	char c='A';
	cp=&c;

	voidDemo(cp);
	cpOld=cp;
	cp+=6;
	printf("cp=%p cpOld=%p diff=%ld\n", cp,cpOld,diff(cp,cpOld));
}

void	shortDemo() {
	short *sp,*spOld;
	short s=42;
	sp=&s;

	voidDemo(sp);
	spOld=sp;
	sp+=6;
	printf("sp=%p spOld=%p diff=%ld\n", sp,spOld,diff(sp,spOld));
}

void	intDemo() {
	int *ip,*ipOld;
	int i=42;
	ip=&i;

	voidDemo(ip);
	ipOld=ip;
	ip+=6;
	printf("ip=%p ipOld=%p diff=%ld\n", ip,ipOld,diff(ip,ipOld));
}

void	longDemo() {
	long *lp,*lpOld;
	long l=42l;
	lp=&l;

	voidDemo(lp);
	lpOld=lp;
	lp+=6;
	printf("lp=%p lpOld=%p diff=%ld\n", lp,lpOld,diff(lp,lpOld));
}

int main() {

	charDemo();
	shortDemo();
	intDemo();
	longDemo();

	return 0;
}


