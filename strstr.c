#include <stdio.h>

// Checks if sub matches starting from str
int match(const char *str, const char *sub) {
    while (*sub) {
        if (*str != *sub)
            return 0;
        str++;
        sub++;
    }
    return 1;
}

// Recursive strstr function
char* myStrstr(const char *str, const char *sub) {
    if (*str == '\0')
        return NULL;
    if (match(str, sub))
        return (char*)str;
    return myStrstr(str + 1, sub);
}

int main() {
    char str[] = "Aditya Kumar Sharma";
    char sub[] = "Sharma";
    char *result = myStrstr(str, sub);

    if (result)
        printf("Substring found at: %s\n", result);
    else
        printf("Substring not found\n");

    return 0;
}




                          // strchr


// #include <stdio.h>
// char *myStrchr(char *str, char ch, int i) {
//     if (str[i] == '\0') return NULL; // Base case: end of string
//     if (str[i] == ch) return &str[i]; // Character found
//     return myStrchr(str, ch, i + 1); // Recursive case
// }
// int main() {
//     char str[] = "coding";
//     char ch = 'd';
//     char *result = myStrchr(str, ch, 0);
//     if (result)
//         printf("Character '%c' found at: %s\n", ch, result);
//     else
//         printf("Character '%c' not found\n", ch);
//     return 0;
// }








                             //  strcmp
// #include <stdio.h>

// int myStrcmp(const char *s1, const char *s2) {
//     if (*s1 == '\0' && *s2 == '\0') return 0;
//     if (*s1 != *s2) return *s1 - *s2;
//     return myStrcmp(s1 + 1, s2 + 1);
// }

// int main() {
//     char s1[] = "vector";
//     char s2[] = "vector";
//     int result = myStrcmp(s1, s2);

//     if (result == 0)
//         printf("Strings are equal\n");
//     else
//         printf("Strings are not equal\n");

//     return 0;
// }
