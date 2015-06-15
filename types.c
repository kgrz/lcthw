#include "stdio.h"


int main() {
    struct {
	const char *key;
	int value;
    } keyvalue;

    typedef struct keyvalue;
}
