#include <stdio.h>

int main(int argc, char *argv[])
{
    int areas[] = { 10, 12, 13, 14, 20};
    char name[] = "Zed";
    char full_name[] = {
	'Z', 'e', 'd', ' ', 'A', '.', ' ', 'S', 'h', 'a', 'w'
    };
    char full_name_second[] = "Zed A. Shaw";

    printf("The size of an int: %ld\n", sizeof(int));
    printf("The size of areas (int[]): %ld\n", sizeof(areas));
    printf("The size number of ints in areas: %ld\n", sizeof(areas)/sizeof(int));
    printf("The first area is %d, the second %d.\n", areas[0], areas[1]);
    printf("The size of a chars: %ld\n", sizeof(char));
    printf("The size of full_name (char[]): %ld\n", sizeof(full_name));
    printf("The size of full_name_second (char[]): %ld\n", sizeof(full_name_second));
    printf("The number of chars: %ld\n", sizeof(name) / sizeof(char));
    printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

    printf("The size of double is %ld\n", sizeof(double));
    printf("The size of float is %ld\n", sizeof(float));
    return 0;
}

