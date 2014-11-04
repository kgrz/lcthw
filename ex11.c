#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    while(i < argc) {
	printf("arg %d: %s\n", i, argv[i]);
	printf("result of i < argc:  %d\n", i < argc);
	i++;
    }

    char *states[] = {
	"Andhra Pradesh", "Tamil Nadu", "Karnataka", "Kerala"
    };

    int num_states = 4;
    i = 0;
    while(i < num_states) {
	printf("state %d: %s\n", i, states[i]);
	i++;
    }

    /* copying argv into states */
    printf("***** copying argv into states *****\n");
    /* if argv.count > 4, then the following routine would try to
     * assign states[4] to argv[4]. However, states[4] would be some other
     * memory location and this will cause a segfault. This is the output
     * when run with valgrind:
     *
	==12633== Process terminating with default action of signal 11 (SIGSEGV)
	==12633==  Bad permissions for mapped region at address 0xFFF000A21
	==12633==    at 0xFFF000A21: ???
	==12633==    by 0x4800657A69730064: ???
	==12633==    by 0x53454C4946545348: ???
	==12633==    by 0x303030313D455A48: ???
	==12633==    by 0x2F3D4C49414D002F: ???
	==12633==    by 0x6C69616D2F726175: ???
	==12633==    by 0x75746E7562752E: ???
	==12633==    by 0x7562753D52455354: ???
	==12633==    by 0x5F4853530075746D: ???
	==12633==    by 0x313D544E45494C42: ???
	==12633==    by 0x382E3137312E3231: ???
	==12633==    by 0x3330322037342E30: ???
     *
     * To avoid this, one way is to use num_states as the counter check.
     * This would be a very crude and wrong way. I could use an if
     * statement, but since the text didn't discuss that, I'll skip.
     */

    i = 0;
    while (i < num_states) {
	states[i] = argv[i];
	i++;
    }

    i = 0;
    while(i < num_states) {
	printf("state %d: %s\n", i, states[i]);
	i++;
    }

    return 0;
}
