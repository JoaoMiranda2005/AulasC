
#include <stdio.h>

int strEnd(const char *s, const char *t) {
    int len_s = 0;
    int len_t = 0;

    while (s[len_s] != '\0') {
        len_s++;
    }

    while (t[len_t] != '\0') {
        len_t++;
    }

    if (len_t > len_s) {
        return 0; 
    }

    for (int i = 0; i < len_t; i++) {
        if (s[len_s - len_t + i] != t[i]) {
            return 0; 
        }
    }

    return 1; 
}

int main() {
    const char *s = "abcdefgh";
    const char *t1 = "fgh";
    const char *t2 = "xyz";

    printf("Resultado para t1: %d\n", strEnd(s, t1));
    printf("Resultado para t2: %d\n", strEnd(s, t2));

    return 0;
}