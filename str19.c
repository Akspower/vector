#include <stdio.h>
#include <string.h>

void insert_char(char *s, int index, char ch, int size) {
    int len = strlen(s);
    printf("Length %d\n",len);

    // Shift characters to the right
    for (int i = len; i >= index; i--) { // Use i >= index to shift all characters properly            i=len;i>index;i--     s[i]=s[i-1]
        s[i + 1] = s[i];
    }

    // Insert the new character
    s[index] = ch;

    // Null-terminate the string at the new correct position
    s[len + 1] = '\0'; // New length = old length + 1
}

int main() {
    char s1[10] = "abcdef";
    char s2[10] = "123456";

    // Insert '9' at the 2nd index in s1
    insert_char(s1, 2, '9', sizeof(s1));
    printf("Output 1: %s\n", s1);  // Expected output: "ab9cdef"

    // Insert 'p' at the 0th index in s2
    insert_char(s2, 0, 'p', sizeof(s2));
    printf("Output 2: %s\n", s2);  // Expected output: "p123456"

    return 0;
}




// focus on for loop

                                    // Q-20


// #include <stdio.h>
// #include <string.h>

// // Function to insert a character at a specific index
// void insert_char(char *s, int index, char ch, int size) {
//     int len = strlen(s);


//     // Shift characters to the right to make space
//     for (int i = len; i > index; i--) {
//         s[i] = s[i-1];
//     }

//     // Insert new character
//     s[index] = ch;
// }

// int main() {
//     char s[15] = "123456"; // Initial string with extra space

//     // Insert 'p' at index 0
//     insert_char(s, 0, 'p', sizeof(s));

//     // Insert 'q' at index 1
//     insert_char(s, 1, 'q', sizeof(s));

//     // Print the updated string
//     printf("Updated String: %s\n", s);  // Expected output: "pq123456"

//     return 0;
// }

