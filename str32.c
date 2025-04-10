#include <stdio.h>

void sortString(char *str) {
    char *p = str;
    int len = 0;
    char temp;

    while (*p) {
        len++;
        p++;
    }

    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1; j++) {
            if (*(str + j) > *(str + j + 1)) {
                temp = *(str + j);
                *(str + j) = *(str + j + 1);
                *(str + j + 1) = temp;
            }
        }
    }
}

int main() {
    char s[10] = "Aa1Bb2Cc3";

    printf("Original string: %s\n", s);

    sortString(s); // Pass by pointer

    printf("Sorted string  : %s\n", s);

    return 0;
}
