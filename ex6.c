#include <stdio.h>

int main(int argc, char *argv[])
{
    int hex = 0x100;
    int distance = 100;
    float power = 2.345f;
    double super_power = 56789.4532;
    char initial = 'A';
    char first_name[] = "Zed";
    char second_name[] = "Shaw";
    char empty_string[] = "";

    printf("You are %d miles away.\n", distance);
    printf("You are %f leves of power.\n", power);
    printf("You have %f awesome super powers\n", super_power);
    printf("I have an initial %c\n", initial);
    printf("I have a first name %s.\n", first_name);
    printf("I have a last name %s.\n", second_name);
    printf("I have a no name %s.\n", empty_string);
    printf("My whole name is %s %c. %s.\n", first_name, initial, second_name);
    printf("hex value %i", hex);
    return 0;
}
