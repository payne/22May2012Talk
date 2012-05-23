/** Arrays/pointers in the command line */
#include <stdio.h>
#include <stdlib.h>

// RTFM man 7 environ 
extern char **environ;

//ANSWER: This way (3rd param to main) is deprecated
// https://www.securecoding.cert.org/confluence/display/seccode/ENV31-C.+Do+not+rely+on+an+environment+pointer+following+an+operation+that+may+invalidate+it
int main(int argc, char *argv[], char *env[]) {
	// argc -- argument cont
	// argv -- argument vector 
  // Let's talk about argv!!

  int i;
  for (i=0; i < argc; i++) {
    printf("argv[%d]='%s'\n", i, argv[i]);
  }

	//QUESTION: show how to properly access environment variables
	//ANSWER: This way is deprecated
	// https://www.securecoding.cert.org/confluence/display/seccode/ENV31-C.+Do+not+rely+on+an+environment+pointer+following+an+operation+that+may+invalidate+it
  for (i=0; NULL==env[i]; i++) {
    printf("env[%d]='%s'\n", i, env[i]);
  }

	// RTFM getenv
	char *path=getenv("PATH");
	printf("PATH is '%s'\n", path);
	// RTFM man 7 environ 
	char **ep=environ;
	while (NULL!=*ep) {
		char *env_assignment=*ep;
		ep++;
		puts(env_assignment);
	}

	
  return 0;
}
