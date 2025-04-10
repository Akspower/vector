#include <stdio.h>

int areAnagrams(char *s1, char *s2) {
    int count[256] = {0};  // Array to store frequency of characters


// if length of str 1 and 2 is different then not a anagram


    // Count characters in both strings
    while (*s1) {  // Iterate through both strings
        count[(unsigned char)*s1]++;  // Increment for s1
        count[(unsigned char)*s2]--;  // Decrement for s2      unsigned to track ascii which is greater than 127
        s1++;  // Move to the next character in s1
        s2++;  // Move to the next character in s2
    }

    // Check if all counts are zero (anagrams)
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {  // If any count is non-zero, they are not anagrams
            return 0;  // Not an anagram
        }
    }

    return 1;  // Strings are anagrams
}

int main() {
    char s1[10] = "2h#p";
    char s2[10] = "#p2h";

    // Check if strings are anagrams
    if (areAnagrams(s1, s2)) {
        printf("Yes, both strings are Anagram\n");
    } else {
        printf("No, both strings are not Anagram\n");
    }

    return 0;
}
