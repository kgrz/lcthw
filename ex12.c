#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;
    if (argc == 1) {
	printf("You only one argument. You suck.\n");
    } else if(argc > 1 && argc < 4) {
	printf("Here are your arguments:\n");

	for(i = 0; i < argc; i++) {
	    printf("%s ", argv[i]);
	}
	printf("\n");
    } else {
	printf("You have too many arguments. You suck.\n");
    }


    printf("******** Correct implementation ********\n");

    i = 1;
    if (argc == 2) {
	printf("You only one argument. You suck.\n");
    } else if(argc > 2 && argc <= 5) {
	printf("Here are your arguments:\n");

	for(i = 1; i < argc; i++) {
	    printf("%s ", argv[i]);
	}
	printf("\n");
    } else if(argc > 5) {
	printf("You have too many arguments. You suck.\n");
    }
    return 0;
}
