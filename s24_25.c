#include <stdio.h>

void printFirstWord(char *s) {
    // Skip leading spaces
    while (*s == ' ') {
        s++;
    }

    // Print the first word
    while (*s != ' ' && *s != '\0') {       //*s != '\0' for only one word present in str
        printf("%c", *s);
        s++;
    }
}

int main() {
    char s[30] = "   vector india pvt";  // Added leading spaces
    printFirstWord(s);
    return 0;
}        



// #include <stdio.h>

// void printLastWord(char *s) {
//     char *end = s;

//     // Move to the end of the string
//     while (*end) {
//         end++;
//     }
//     end--;  // Move back from '\0'

//     // Skip trailing spaces
//     while ( *end == ' ') {      // && end>=s  if one word only
//         end--;
//     }

//     // Find the start of the last word
//     char *start = end;
//     while (*start != ' ') {         // && start>=s  if only one word in string
//         start--;
//     }
    
//     // Print the last word
//     start++;  // Move to the first letter of the last word
//     while (start <= end) {
//         printf("%c",*start);
//         start++;
//     }
// }

// int main() {
//     char s[] = "vector india coding    ";     // it doesnt work for only one like "vector" handle it two times separetely
//     printLastWord(s);  // Output: coding
//     return 0;
// }

