#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student {
    int roll;
    char name[20];
    float marks;
    struct student* next;
} sll;

sll *headptr = NULL;

// Helper function to clear the input buffer
void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void add_begin(sll **ptr) {
    sll *new = malloc(sizeof(sll));
    printf("Enter roll, name, marks: ");
    scanf("%d %19s %f", &new->roll, new->name, &new->marks);
    clear_input_buffer();  // Clear buffer after reading input
    new->next = *ptr;
    *ptr = new;
}

void add_middle(sll **ptr) {
    int pos, cnt = 0;
    sll *temp = *ptr;
    while (temp) {
        cnt++;
        temp = temp->next;
    }

    printf("Enter position\n");
    if (scanf("%d", &pos) != 1) {
        clear_input_buffer();
        printf("Invalid input\n");
        return;
    }
    clear_input_buffer();  // Clear buffer after reading position

    if (pos < 1 || pos > cnt + 1) {
        printf("Invalid position\n");
        return;
    }

    if (pos == 1) {
        add_begin(ptr);
        return;
    }

    sll *new = malloc(sizeof(sll));
    printf("Enter roll, name, marks: ");
    if (scanf("%d %19s %f", &new->roll, new->name, &new->marks) != 3) {
        clear_input_buffer();
        printf("Invalid input\n");
        free(new);
        return;
    }
    clear_input_buffer();  // Clear buffer after reading input

    temp = *ptr;
    for (int i = 1; i < pos - 1; i++) {
        temp = temp->next;
    }

    new->next = temp->next;
    temp->next = new;
    printf("Node added at position %d\n", pos);
}

void add_end(sll **ptr) {
    sll *new, *last;
    new = malloc(sizeof(sll));
    printf("Enter roll, name, marks: ");
    if (scanf("%d %19s %f", &new->roll, new->name, &new->marks) != 3) {
        clear_input_buffer();
        printf("Invalid input\n");
        free(new);
        return;
    }
    clear_input_buffer();  // Clear buffer after reading input

    new->next = NULL;
    if (*ptr == NULL) {
        *ptr = new;
    } else {
        last = *ptr;
        while (last->next)
            last = last->next;
        last->next = new;
    }
}

void print(sll *ptr) {
    if (ptr == NULL) {
        printf("List is empty\n");
        return;
    }
    printf("Student List:\n");
    while (ptr) {
        printf("Roll: %d, Name: %s, Marks: %.1f\n", ptr->roll, ptr->name, ptr->marks);
        ptr = ptr->next;
    }
}

int count(sll *ptr) {
    int cnt = 0;
    while (ptr) {
        cnt++;
        ptr = ptr->next;
    }
    return cnt;
}

void savefile(sll *ptr) {
    FILE *fp = fopen("temp.txt", "w");
    while (ptr) {
        fprintf(fp, "%d,%s,%f\n", ptr->roll, ptr->name, ptr->marks);
        ptr = ptr->next;
    }
    fclose(fp);
}

void readfile(sll **ptr) {
    sll *new, *last;
    FILE *fp = fopen("temp.txt", "r");
    if (fp == NULL) {
        printf("File not found\n");
        return;
    }

    // Clear the existing list
    while (*ptr) {
        sll *temp = *ptr;
        *ptr = (*ptr)->next;
        free(temp);
    }

    int count = 0;
    while (1) {
        new = malloc(sizeof(sll));
        int result = fscanf(fp, "%d,%19[^,],%f\n", &new->roll, new->name, &new->marks);
        if (result != 3) {
            free(new);
            if (result == EOF && count == 0) {
                printf("File is empty\n");
            }
            break;
        }
        new->next = NULL;
        if (*ptr == NULL) {
            *ptr = new;
        } else {
            last = *ptr;
            while (last->next) {
                last = last->next;
            }
            last->next = new;
        }
        count++;
    }
    fclose(fp);
    if (count > 0) {
        printf("Read %d records from temp.txt\n", count);
    }
}

void print_rec(sll *ptr) {
    if (ptr == NULL) return;
    printf("Roll: %d, Name: %s, Marks: %.1f\n", ptr->roll, ptr->name, ptr->marks);
    print_rec(ptr->next);
}

void reverse_rec(sll *ptr) {
    if (ptr == NULL) return;
    reverse_rec(ptr->next);
    printf("Roll: %d, Name: %s, Marks: %.1f\n", ptr->roll, ptr->name, ptr->marks);
}

void reverse_print(sll *ptr) {
    if (ptr == NULL) {
        printf("List is empty\n");
        return;
    }

    int cnt = count(ptr);
    sll *temp;
    printf("Reverse Print:\n");
    for (int i = cnt; i >= 1; i--) {
        temp = ptr;
        for (int j = 1; j < i; j++) {
            temp = temp->next;
        }
        printf("Roll: %d, Name: %s, Marks: %.1f\n", temp->roll, temp->name, temp->marks);
    }
}

void delete_all(sll **ptr) {
    sll *temp = *ptr;
    while (temp) {
        sll *next = temp->next;
        free(temp);
        temp = next;
    }
    *ptr = NULL;
    printf("Delete all nodes\n");
}

void delete_node(sll **ptr) {
    int num;
    printf("Enter roll no. to delete\n");
    if (scanf("%d", &num) != 1) {
        clear_input_buffer();
        printf("Invalid input\n");
        return;
    }
    clear_input_buffer();  // Clear buffer after reading input

    sll *del = *ptr, *prev = NULL;
    while (del) {
        if (del->roll == num) {
            if (del == *ptr) {
                *ptr = del->next;
            } else {
                prev->next = del->next;
            }
            free(del);
            printf("Node with roll %d deleted\n", num);
            return;
        }
        prev = del;
        del = del->next;
    }
    printf("Roll %d not found\n", num);
}

void search_node(sll *ptr) {
    int roll;
    printf("Enter roll no. to search\n");
    if (scanf("%d", &roll) != 1) {
        clear_input_buffer();
        printf("Invalid input\n");
        return;
    }
    clear_input_buffer();  // Clear buffer after reading input

    while (ptr) {
        if (ptr->roll == roll) {
            printf("Found: Roll: %d, Name: %s, Marks: %.1f\n", ptr->roll, ptr->name, ptr->marks);
            return;
        }    
        ptr = ptr->next;
    }
    printf("Roll %d not found\n", roll);
}

void sort_nodes(sll **ptr) {
    int n = count(*ptr);
    if (n <= 1) {
        printf("List is empty or has only one node, no sorting needed\n");
        return;
    }

    sll *current, *next;
    for (int i = 0; i < n - 1; i++) {
        current = *ptr;
        for (int j = 0; j < n - 1 - i; j++) {
            next = current->next;
            if (current->roll > next->roll) {         // for name base sorrting strcmp  
                // Swap data
                int temp_roll = current->roll;
                char temp_name[20];
                strcpy(temp_name, current->name);
                float temp_marks = current->marks;

                current->roll = next->roll;
                strcpy(current->name, next->name);
                current->marks = next->marks;

                next->roll = temp_roll;
                strcpy(next->name, temp_name);
                next->marks = temp_marks;
            }
            current = current->next;
        }
    }
    printf("List sorted by roll number\n");
}

void reverse_link(sll **ptr) {
    sll *prev = NULL, *current = *ptr, *next = NULL;
    while (current) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *ptr = prev;
    printf("List links reversed\n");
}

int main() {
    int op, c;
    while (1) {
        printf("\nEnter your choice:\n");
        printf("1. Add at beginning\n2. Add at middle\n3. Add at end\n4. Print list\n5. Count nodes\n6. Save to file\n7. Read from file\n8. Reverse print\n9. Print recursive\n10. Reverse print recursive\n11. Delete all\n12. Delete node\n13. Search node\n14. Sort nodes\n15. Reverse link\n16. Exit\n");
        if (scanf("%d", &op) != 1) {
            clear_input_buffer();  // Clear buffer on invalid input
            printf("Invalid choice! Try again.\n");
            continue;

            
        }
        clear_input_buffer();  // Clear buffer after reading choice
               //clear buffer not required so not go in loop
        switch (op) {
            case 1: add_begin(&headptr); break;
            case 2: add_middle(&headptr); break;
            case 3: add_end(&headptr); break;
            case 4: print(headptr); break;
            case 5: c = count(headptr); printf("Count is %d\n", c); break;
            case 6: savefile(headptr); break;
            case 7: readfile(&headptr); break;
            case 8: reverse_print(headptr); break;
            case 9: print_rec(headptr); break;
            case 10: reverse_rec(headptr); break;
            case 11: delete_all(&headptr); break;
            case 12: delete_node(&headptr); break;
            case 13: search_node(headptr); break;
            case 14: sort_nodes(&headptr); break;
            case 15: reverse_link(&headptr); break;
            case 16: exit(0);
            default: printf("Invalid choice! Try again.\n");
        }
    }
}