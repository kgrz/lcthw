#include "stdio.h"


int main() {
    int i = 10;
    int j;

    j = (++i + 10);
    printf("The value of j is %d\n", j);
    printf("The value of i is %d", i);
}
