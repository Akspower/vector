#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME 50

typedef struct {
    char *name;
    int id;
} student;

int main() {
    int n;
    printf("How many students? ");
    scanf("%d", &n);

    student *students = malloc(n * sizeof(student));

    for (int i = 0; i < n; i++) {
        char temp[MAX_NAME];
        printf("Enter name for student %d: ", i + 1);
        scanf(" %[^\n]", temp);

        // Allocate fixed 50 bytes for name
        students[i].name = malloc(MAX_NAME);
        strcpy(students[i].name, temp);

        printf("Enter ID for student %d: ", i + 1);
        scanf("%d", &students[i].id);
    }

    printf("\nStudent List:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: Name = %s, ID = %d\n", i + 1, students[i].name, students[i].id);
    }

    for (int i = 0; i < n; i++) {
        free(students[i].name);
        students[i].name = NULL; // Prevent dangling pointer
    }
    free(students);
    students = NULL; // Prevent dangling pointer otherwise chance of memory leak

    return 0;
} 