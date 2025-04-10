#include <stdio.h>

int isPalindrome(char *str) {
    char *start = str;
    char *end = str;

    // Move 'end' to the last character (just before '\0')
    while (*end) {
        end++;
    }
    end--; // Point to last valid character

    // Compare characters from both ends
    while (start < end) {
        if (*start != *end) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }

    return 1; // Palindrome
}

int main() {
    char s[100]=" racecar ";


    if (isPalindrome(s)) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}



//         Q33

// #include <stdio.h>

// int isPresent(char *start, char ch, char *current) {
//     while (start < current) {
//         if (*start == ch) {
//             return 1;  // Already seen
//         }
//         start++;
//     }
//     return 0;  // Not seen
// }

// void removeDuplicates(char *str) {
//     char *src = str;
//     char *dst = str;

//     while (*src) {
//         if (!isPresent(str, *src, dst)) {
//             *dst = *src;
//             dst++;
//         }
//         src++;
//     }

//     *dst = '\0';  // Null-terminate the result
// }

// int main() {
//     char s[100];

//     printf("Enter a string: ");
//     fgets(s, sizeof(s), stdin);

//     removeDuplicates(s);

//     printf("String after removing duplicates: %s", s);

//     return 0;
// }

                // Q37
// #include <stdio.h>

// void mergeStrings(char *s1, char *s2, char *s3) {
//     while (*s1 && *s2) {
//         *s3++ = *s1++;
//         *s3++ = *s2++;
//     }

//     while (*s1) {
//         *s3++ = *s1++;
//     }

//     while (*s2) {
//         *s3++ = *s2++;
//     }

//     *s3 = '\0'; // Null terminate the final string
// }

// int main() {
//     char s1[10] = "12";
//     char s2[10] = "ABCD";
//     char s3[20];

//     mergeStrings(s1, s2, s3);

//     printf("Merged string: %s\n", s3);

//     return 0;
// }
