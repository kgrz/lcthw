#include <stdio.h>
#include <string.h>

int foo(void) {
    char bar[128];
    char *baz = &bar[0];

    baz[127] = 0;
    return strlen(baz);
}

int main() {
    int length = foo();
    printf("%d", length);
}
