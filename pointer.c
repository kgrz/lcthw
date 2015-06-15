#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#define N 5


int main(int argc, char *argv[]) {
    int **blah2 = malloc(sizeof(int*)*N);
    printf("%d", blah2);
}
