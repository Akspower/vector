#include <stdio.h>
#include <string.h>

const char* findLongestWord(char* str) {
    int len = strlen(str);
    int maxLen = 0;
    const char* longestWord = str;
    int start = 0;

    for (int i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            int wordLen = i - start;
            if (wordLen > maxLen) {
                maxLen = wordLen;
                longestWord = str + start;
            }
            start = i + 1;
        }
    }
    return longestWord;
}

int main() {
    char str[100] = "The quick brown fox";
    printf("String: %s\n", str);
    const char* longest = findLongestWord(str);
    // Print the longest word
    printf("Longest word: ");
    while (*longest && *longest != ' ') {
        putchar(*longest++);
    }
    putchar('\n');
    return 0;
}