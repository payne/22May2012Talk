/** Pointer arithmetic: p++ increases p by sizeof(*p) 
aka the size of the base type
int *p -- base type is int
*/

#include <stdio.h>

long diff(void *a, void *b) {
	long al = (long) a;
	long bl = (long) b;
	return al - bl;
}

void voidDemo(void *p) {
	void *pOld;
	pOld=p;
	p++;
	printf("voidDemo: %3s=%p %6s=%p diff=%ld\n", 
										"p", p,"pOld",pOld,diff(p,pOld));
}

void	charDemo() {
	char *cp,*cpOld;
	char c='A';
	cp=&c;

	voidDemo(cp);
	cpOld=cp;
	cp++;
	printf("charDemo: %3s=%p %6s=%p diff=%ld\n", 
										"cp", cp,"cpOld",cpOld,diff(cp,cpOld));
}

void	shortDemo() {
	short *sp,*spOld;
	short s=42;
	sp=&s;

	voidDemo(sp);
	spOld=sp;
	sp++;
	printf("shortDemo: %3s=%p %6s=%p diff=%ld sizeof(short)=%d\n", 
										"sp", sp,"spOld",spOld,diff(sp,spOld),sizeof(short));
	printf("QUESTION: Why is the address one off from the void demo here?\n");
	printf("ANSWER: points must align with their underlying type... short every two bytes (on vulcan), int every four bytes (on vulcan), and so on.\n");
}

void	intDemo() {
	int *ip,*ipOld;
	int i=42;
	ip=&i;

	voidDemo(ip);
	ipOld=ip;
	ip++;
	printf("intDemo: %3s=%p %6s=%p diff=%ld sizeof(short)=%d\n", 
										"ip", ip,"ipOld",ipOld,diff(ip,ipOld),sizeof(int));
}

void	longDemo() {
	long *lp,*lpOld;
	long l=42l;
	lp=&l;

	voidDemo(lp);
	lpOld=lp;
	lp++;
	printf("lp=%p lpOld=%p diff=%ld\n", lp,lpOld,diff(lp,lpOld));
}

int main() {

	charDemo();
	shortDemo();
	intDemo();
	longDemo();

	return 0;
}


