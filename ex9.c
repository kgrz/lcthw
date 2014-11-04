#include <stdio.h>

int main(int argc, char *argv[])
{
    int numbers[4] = { 0 };
    char name[4]   = { 'a', 'a', 'a' };

    printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
    printf("name: %s\n", name);

    numbers[0] = 'Z';
    numbers[1] = 'e';
    numbers[2] = 'd';
    numbers[3] = '\0';

    name[0] = 'Z';
    name[1] = 'e';
    name[2] = 'd';
    name[3] = '\0';

    printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
    printf("name: %s\n", name);


    char *another = "Zed";
    printf("another: %s\n", another);
    printf("another each: %c %c %c %c\n", another[0], another[1], another[2], another[3]);
    /* If an array of characters is 4 bytes long, and an integer is 4 bytes
     * long, then can you treat the whole name array like it's just an integer?
     * How might you accomplish this crazy hack?
     *
     *
     * Since each character is stored internally as number simply add up
     * all the numbers or concatenate. Ugly hack that is hard to change it
     * back to string
     */
    printf("size of 96 %ld\n", sizeof(901011000));
    return 0;
}
