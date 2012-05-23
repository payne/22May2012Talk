/** Arrays of pointers */
#include <stdio.h>
#include <string.h>

#define DAYS_IN_WEEK 7

void printAray(char *days[]);

//ANSWERED: Why did this qsort example fail!?  Other than not practicing!
//qsort passes pointers to each element being sorted.
//so the parameters here are really pointers to pointers!
int ourstrcmp(const void *a_pointer_to_string, const void *b) {
	static int number_of_debug_outputs=3;
	// Step 1: Call it what it is -- a pointer to a pointer
	char **pointer2pointer1=(char **)a_pointer_to_string;
	// Step 2: Dereference it to get what we want -- a "char *"
	char *string1 = *pointer2pointer1;
	char **pointer2pointer2=(char **)b;
	char *string2 = *pointer2pointer2;
	if (0!=number_of_debug_outputs) {
		number_of_debug_outputs--;
		printf("string1=%s\n",string1);
		printf("string2=%s\n",string2);
	}
	int result = strcmp(string1,string2);
	return result;
}


int main(int argc, char *argv[]) {
  char *days[] = { "Sunday", "Monday", "Tuesday", "Wed", "Beer day", "Fri", 
		"Saturday" };
	printAray(days);
	//qsort(days,DAYS_IN_WEEK,sizeof(char *), strcmp);//attempt to "cheat"
	qsort(days,DAYS_IN_WEEK,sizeof(char *), ourstrcmp);//attempt to "cheat"
	printAray(days);
  return 0;
}

void printAray(char *days[]) {
  printf("This is an array of seven pointers to strings.\n");
  int i;
  for (i=0; i < DAYS_IN_WEEK; ++i) {
    printf("\t%s\n", days[i]);
  }
}
