#include <stdio.h>
#include <stdlib.h>

typedef struct student {
    int roll;
    char name[20];
    float marks;
    struct student* next;
} sll;

sll *headptr = NULL;

// Add node at the beginning
void add_begin(sll **ptr) {
    sll *new = malloc(sizeof(sll));
    printf("Enter roll, name, marks: ");
    scanf("%d %s %f", &new->roll, new->name, &new->marks);
    new->next = *ptr;
    *ptr = new;
}

// Print the linked list
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

// Count number of nodes
int count(sll *ptr) {
    int cnt = 0;
    while (ptr) {
        cnt++;
        ptr = ptr->next;
    }
    return cnt;
}

// Save list data to a file
void savefile(sll *ptr){
    FILE *fp = fopen("temp.txt", "w");
    while(ptr){
        fprintf(fp, "%d,%s,%f\n", ptr->roll, ptr->name, ptr->marks);
        ptr = ptr->next;
    }
    fclose(fp);
}

// Add node at the end
void add_end(sll **ptr){
    sll *new, *last;
    new = malloc(sizeof(sll));
    printf("Enter data for last: ");
    scanf("%d %s %f", &new->roll, new->name, &new->marks);
    new->next = 0;

    if (*ptr == 0) {
        *ptr = new;
    } else {
        last = *ptr;
        while (last->next)
            last = last->next;
        last->next = new;
    }
}

// Read data from file into the list
void readfile(sll **ptr){
    sll *new, *last;
    FILE *fp = fopen("temp.txt", "r");
    if (fp == 0) {
        printf("File not found\n");
        return;
    }
    while (1) {
        new = malloc(sizeof(sll));
        if (fscanf(fp, "%d,%[^,],%f", &new->roll, new->name, &new->marks) != 3) {
            free(new);
            break;
        }
        new->next = 0;
        if (*ptr == 0)
            *ptr = new;
        else {
            last = *ptr;
            while (last->next)
                last = last->next;
            last->next = new;
        }
    }
    fclose(fp);
}

// Recursive print
void print_rec(sll *ptr){
    if(ptr == NULL) return;
    printf("%d %s %f\n", ptr->roll, ptr->name, ptr->marks);
    print_rec(ptr->next);
}

// Reverse print recursively (just for display)
void reverse_rec(sll *ptr){
    if(ptr == NULL) return;
    reverse_rec(ptr->next);
    printf("%d %s %f\n", ptr->roll, ptr->name, ptr->marks);
}

// Delete all nodes
void delete_all(sll **ptr){
    sll *temp = *ptr;
    while(temp){
        sll *next = temp->next;
        free(temp);
        temp = next;
    }
    *ptr = 0;
    printf("Deleted all nodes\n");
}

// Delete node by roll number
void delete_node(sll **ptr){
    int num;
    printf("Enter roll no. to delete: ");
    scanf("%d", &num);
    sll *del = *ptr, *prev = NULL;

    while (del) {
        if (del->roll == num) {
            if (del == *ptr)
                *ptr = del->next;
            else
                prev->next = del->next;
            free(del);
            printf("Node deleted\n");
            return;
        }
        prev = del;
        del = del->next;
    }
    printf("Roll not found\n");
}

// Search node by name
void search_node(sll *ptr){
    char key[20];
    printf("Enter name to search: ");
    scanf("%s", key);
    while(ptr){
        if(strcmp(ptr->name, key) == 0){
            printf("Found: %d %s %.1f\n", ptr->roll, ptr->name, ptr->marks);
            return;
        }
        ptr = ptr->next;
    }
    printf("Not found\n");
}

// Sort linked list by roll using bubble sort
void sort_node(sll *ptr){
    int i, n = count(ptr);
    sll *a, *b;
    for(i = 0; i < n - 1; i++){
        a = ptr;
        while(a->next){
            b = a->next;
            if(a->roll > b->roll){
                // Swap data only
                int t_roll = a->roll;
                float t_marks = a->marks;
                char t_name[20];
                strcpy(t_name, a->name);

                a->roll = b->roll;
                a->marks = b->marks;
                strcpy(a->name, b->name);

                b->roll = t_roll;
                b->marks = t_marks;
                strcpy(b->name, t_name);
            }
            a = a->next;
        }
    }
    printf("Sorted by roll number\n");
}

// Reverse linked list (actual links)
void reverse_list(sll **head){
    sll *prev = NULL, *curr = *head, *next = NULL;
    while(curr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *head = prev;
    printf("Linked list reversed successfully\n");
}

// Placeholder: Insert at middle or particular position
// -> You can build your logic here later
void add_middle(sll **ptr){
    printf("// TODO: Add logic to insert at middle/particular position\n");
}


int main() {
    int op, c;
    while (1) {
        printf("\nEnter your choice:\n");
        printf("1. Add at beginning\n");
        printf("2. Add at end\n");
        printf("3. Print list\n");
        printf("4. Count nodes\n");
        printf("5. Save to file\n");
        printf("6. Read from file\n");
        printf("7. Print recursively\n");
        printf("8. Reverse print recursively\n");
        printf("9. Delete all\n");
        printf("10. Delete node\n");
        printf("11. Search by name\n");
        printf("12. Sort by roll number\n");
        printf("13. Reverse linked list (actual)\n");
        printf("14. Insert at middle/particular node (future logic)\n");
        printf("15. Exit\n");

        scanf("%d", &op);
        switch (op) {
            case 1: add_begin(&headptr); break;
            case 2: add_end(&headptr); break;
            case 3: print(headptr); break;
            case 4: c = count(headptr); printf("Count is %d\n", c); break;
            case 5: savefile(headptr); break;
            case 6: readfile(&headptr); break;
            case 7: print_rec(headptr); break;
            case 8: reverse_rec(headptr); break;
            case 9: delete_all(&headptr); break;
            case 10: delete_node(&headptr); break;
            case 11: search_node(headptr); break;
            case 12: sort_node(headptr); break;
            case 13: reverse_list(&headptr); break;
            case 14: add_middle(&headptr); break;
            case 15: exit(0);
            default: printf("Invalid choice! Try again.\n");
        }
    }
}
