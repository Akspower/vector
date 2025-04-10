#include <stdio.h>
#include <string.h>

int countSubstrings(char *m, char *s) {
    int count = 0;
    char *temp;

    // Search for the first occurrence of the substring
    temp = strstr(m, s);

    // Keep searching while a match is found
    while (temp) {
        count++;  // Increment the count for each match
        temp = strstr(temp + 1, s);  // Continue searching from the next position
    }

    return count;
}

int main() {
    char m[20] = "abcd cd 12cd";
    char s[5] = "cd";

    // Count occurrences of s in m
    int result = countSubstrings(m, s);

    // Output the result
    printf("Count = %d times\n", result);

    return 0;
}
