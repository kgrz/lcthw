#include "stdio.h"
#include "assert.h"
#include "stdlib.h"
#include "string.h"

struct Person {
    char *name;
    int age;
    int height;
    int weight;
};

struct void Person_create(char *name, int age, int height, int weight)
{
    struct Person who;

    who.name = strdup(name);
    who.age = age;
    who.height = height;
    who.weight = weight;
}


void Person_print(struct Person who)
{
    printf("Name: %s\n", who.name);
    printf("\tAge: %d\n", who.age);
    printf("\tHeight: %d\n", who.height);
    printf("\tWeight: %d\n", who.weight);
}

int main(int argc, char *argv[])
{
    struct Person joe = Person_create("Joe Alex", 32, 64, 140);
    struct Person frank = Person_create("Frank Kas", 32, 64, 140);
    printf("Size of struct is: %lu\n", sizeof(struct Person));

    Person_print(joe);
    Person_print(frank);

    joe.age += 20;
    joe.height -= 2;
    joe.weight += 20;
    Person_print(joe);

    return 0;
}
