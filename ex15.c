#include <stdio.h>

int main(int argc, char *argv[])
{
    int ages[] = { 23, 43, 12, 89, 2 };
    char *names[] = {
	"Alan", "Frank", "Mary", "John", "Lisa"
    };

    int count = sizeof(ages) / sizeof(int);
    int i = 0;

    for(i = 0; i < count; i++) {
	printf("%s has %d years alive.\n", names[i], ages[i]);
    }

    printf("---\n");

    int *cur_age = ages;
    char **cur_name = names;
    printf("Size of cur_age pointer: %ld\n", sizeof(cur_age));
    printf("Size of cur_name pointer: %ld\n", sizeof(cur_name));
    printf("Size of int: %ld\n", sizeof(int));
    printf("Size of ages: %ld\n", sizeof(ages));
    printf("Size of names: %ld\n", sizeof(names));

    for(i = 0; i < count; i++) {
	printf("%s is %d years old.\n", *(cur_name+i), *(cur_age+i));
    }

    printf("---\n");

    for(i=0; i < count; i++) {
	printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
    }

    printf("---\n");

    for(cur_name = names, cur_age = ages;
	    (cur_age - ages) < count; cur_name++, cur_age++)
    {
	printf("%s lived %d years so far.\n", *cur_name, *cur_age);
    }

    printf("---\n");

    for(i = count-1; i >= 0; i--) {
	printf("%s has %d years alive.\n", names[i], ages[i]);
    }

    printf("---\n");

    int *cur_age_two = ages;
    char **cur_name_two = names;
    cur_name_two = cur_name_two + count;
    cur_age_two = cur_age_two + count;

    for(i = count; i > 0; i--) {
	printf("%s has %d years alive.\n", *(cur_name-i), *(cur_age-i));
    }

    return 0;
}
