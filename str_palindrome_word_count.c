#include <stdio.h>
#include <string.h>

// Helper function to check if a substring is a palindrome
int isPalindrome(const char* str, int start, int end) {
    while (start < end) {
        if (str[start] != str[end]) return 0;
        start++;
        end--;
    }
    return 1;
}

// Function to count palindrome words
int countPalindromeWords(char* str) {
    int len = strlen(str);
    int count = 0;
    int start = 0;

    for (int i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            if (start <= i - 1 && isPalindrome(str, start, i - 1)) {
                count++;
            }
            start = i + 1;
        }
    }
    return count;
}

int main() {
    char str[100];
    
    printf("Enter a sentence:\n");
    scanf(" %[^\n]", str);  // Note the space before %[^\n] to skip any leftover newline

    printf("String: %s\n", str);

    int count = countPalindromeWords(str);
    printf("Number of palindrome words: %d\n", count);
    
    return 0;
}
