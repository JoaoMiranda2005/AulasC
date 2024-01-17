#include <stdio.h>

void main(void) {
    int x, *p;
    x = 10;

    p = &x;

    printf("%d", *p);
}