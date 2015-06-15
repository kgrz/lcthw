#include "stdio.h"

int main(int argc, char *argv[])
{
    int ages[] = {23, 43, 12, 89, 2};
    char *names[] = {"name", "name2"};
    int *pointer = ages;
    char **namepointer = names;
    printf("%d", pointer[1]);
    printf("%s", namepointer[1]);
    return 0;
}
