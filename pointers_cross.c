#include "stdio.h"

int main(int argc, char *argv[])
{
    int ages[] = {1, 2, 3, 4, 5};
    char *names[] = {
	"Alan", "Frank",
	"Mary", "John", "Lisa"
    };
    int *cur_age = ages;
    char **cur_name = names;
    int count = sizeof(ages) / sizeof(int);
    printf("%d\n", count);

    for (cur_name = names, cur_age = ages; (cur_age - ages) < count; cur_name++, cur_age++)
    {
	printf("%s lived %d years so far\n", *cur_name, *cur_age);
    }

    return 0;
}
