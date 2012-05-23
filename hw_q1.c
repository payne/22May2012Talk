#include <stdio.h>

int main() {
	float f1=1.6754;

	printf("f1=%2.2f\n",f1);
	printf("What is 1/3 rounded to the nearest hundreth? \n");
	scanf("%f",&f1);
	printf("f1=%2.2f\n",f1);
	// Is it 1.67?   --- within delta (.e.g 0.0001)
	float delta=0.0001;
	if (delta < (f1-1.67)) {
		printf("Yep it's close to 1.67!\n");
	}
	

	return 0;
}
