#include <stdio.h>

int myAtoi(const char *s) {
    int res = 0, sign = 1;
    if (*s == '-') { sign = -1; s++; }
    while (*s >= '0' && *s <= '9') {
        res = res * 10 + (*s - '0');
        s++;
    }
    return sign * res;
}

float myAtof(const char *s) {
    float res = 0, frac = 0, div = 1;
    int sign = 1;
    if (*s == '-') { sign = -1; s++; }

    while (*s >= '0' && *s <= '9') {
        res = res * 10 + (*s - '0');
        s++;
    }

    if (*s == '.') {
        s++;
        while (*s >= '0' && *s <= '9') {
            frac = frac * 10 + (*s - '0');
            div *= 10;
            s++;
        }
    }

    return sign * (res + frac / div);
}

int main() {
    char s1[50], s2[50];

    printf("Enter an integer string: ");
    scanf("%s", s1);
    printf("myAtoi result: %d\n", myAtoi(s1));

    printf("Enter a float string: ");
    scanf("%s", s2);
    printf("myAtof result: %.3f\n", myAtof(s2));

    return 0;
}
