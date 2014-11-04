#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    /* need to skip the first item since that is the file name */
    for(i = 1; i < argc; i++) {
	printf("arg %d: %s\n", i, argv[i]);
    }

    char *states[] = {
	"Andhra Pradesh", "Tamil Nadu", "Karnataka", "Kerala"
    };

    /* Setting this to 5 results in (null) */
    int num_states = 4;

    for(i = 0; i < num_states; i++) {
	printf("state %d: %s\n", i, states[i]);
    }

    printf("***** trying to assign a state name to argv ******\n");

    argv[1] = states[0];

    for(i = 0; i < argc; i++) {
	printf("arg %d: %s\n", i, argv[i]);
    }
    for(i = 0; i < num_states; i++) {
	printf("state %d: %s\n", i, states[i]);
    }

    printf("***** trying to assign a argv value to states ******\n");

    states[0] = argv[2];

    for(i = 0; i < argc; i++) {
	printf("arg %d: %s\n", i, argv[i]);
    }

    for(i = 0; i < num_states; i++) {
	printf("state %d: %s\n", i, states[i]);
    }
    /* Observation: assigning works only for argv values > 0. Looks like the
     * first value in argv cannot be overridden. also noticed that
     * argv[ index > argc ] returns other values. These values are the
     * environment variables.
     */

    for(i = 0; i < 10; i++) {
	printf("arg %d: %s\n", i, argv[i]);
    }

    return 0;
}
