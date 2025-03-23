#include <stdio.h>

void delete_chars(char *s, int start, int count) {
    int i;

    // Check if start index is valid
    if (start < 0 || s[start] == '\0') {
        printf("Invalid start index!\n");
        return;
    }

    // Shift characters left to delete 'count' characters
    for (i = start; s[i+count]; i++) {
        s[i] = s[i + count];  // Shift characters left by 'count' positions
    }
    s[i]='\0';
}

int main() {
    char s[20] = "Kal HonaHo";
    int start, count;

    printf("Enter start index: ");
    scanf("%d", &start);
    printf("Enter number of characters to delete: ");
    scanf("%d", &count);

    delete_chars(s, start, count);

    printf("Output: %s\n", s);

    return 0;
}