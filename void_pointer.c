#include <stdio.h>

int main() {
    int num;
    int *pi = &num;
    char a ='A';
    printf("Value of pi: %p\n", pi);
    printf("size of pi: %lu\n", sizeof(pi));
    void* pv = pi;
    printf("size of pi: %lu\n", sizeof(pv));
    printf("size of char: %lu\n", sizeof(a));
    pi = (int *)pv;
    printf("Value of pi: %p\n", pi);
    printf("size of pi: %lu\n", sizeof(pi));
}
