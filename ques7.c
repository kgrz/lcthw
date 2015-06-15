#include "stdio.h"
#include "stdlib.h"

int main(int argc, char *argv[]) {
    unsigned int i;
    unsigned int k = atoi(argv[1]);
    char *buf = malloc(k);

    if(buf == 0) {
	return -1;
    }

    for(i = 0; i < k; i++) {
	buf[i] = argv[2][i];
    }

    printf("%s\n", buf);
    return -1;
}
