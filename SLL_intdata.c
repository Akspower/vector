#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* headptr = NULL;

// Create a new node
Node* createNode(int data) {
    Node* new = (Node*)malloc(sizeof(Node));
    if (new == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    new->data = data;
    new->next = NULL;
    return new;
}


// Add at beginning
void add_begin(Node** ptr, int data) {
    Node* new = createNode(data);
    new->next = *ptr;
    *ptr = new;
}

// Add at end
void add_end(Node** ptr, int data) {
    Node* new = createNode(data);
    if (*ptr == NULL) {
        *ptr = new;
        return;
    }
    Node* last = *ptr;
    while (last->next) {
        last = last->next;
    }
    last->next = new;
}

// Print list
void print(Node* ptr) {
    if (ptr == NULL) {
        printf("List is empty\n");
        return;
    }
    printf("List: ");
    while (ptr) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

// Count nodes
int count(Node* ptr) {
    int cnt = 0;
    while (ptr) {
        cnt++;
        ptr = ptr->next;
    }
    return cnt;
}

// Delete node by value
void delete_node(Node** ptr, int data) {
    Node* del = *ptr, *prev = NULL;
    while (del) {
        if (del->data == data) {
            if (del == *ptr) {
                *ptr = del->next;
            } else {
                prev->next = del->next;
            }
            free(del);
            printf("Node with data %d deleted\n", data);
            return;
        }
        prev = del;
        del = del->next;
    }
    printf("Data %d not found\n", data);
}

// Search node
void search_node(Node* ptr, int data) {
    while (ptr) {
        if (ptr->data == data) {
            printf("Found: %d\n", ptr->data);
            return;
        }
        ptr = ptr->next;
    }
    printf("Data %d not found\n", data);
}

// Sort nodes
void sort_nodes(Node** ptr) {
    int n = count(*ptr);
    if (n <= 1) {
        printf("List is empty or has only one node\n");
        return;
    }
    Node* current;
    for (int i = 0; i < n - 1; i++) {
        current = *ptr;
        for (int j = 0; j < n - 1 - i; j++) {
            Node* next = current->next;
            if (current->data > next->data) {
                int temp = current->data;
                current->data = next->data;
                next->data = temp;
            }
            current = current->next;
        }
    }
    printf("List sorted\n");
}

// Reverse links
void reverse_link(Node** ptr) {
    Node* prev = NULL, *current = *ptr, *next = NULL;
    while (current) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *ptr = prev;
    printf("List links reversed\n");
}

// Print recursively
void print_rec(Node* ptr) {
    if (ptr == NULL) {
        printf("NULL\n");
        return;
    }
    printf("%d -> ", ptr->data);
    print_rec(ptr->next);
}

// Reverse print recursively
void reverse_rec(Node* ptr) {
    if (ptr == NULL) return;
    reverse_rec(ptr->next);
    printf("%d -> ", ptr->data);
}

// Delete all nodes
void delete_all(Node** ptr) {
    Node* temp = *ptr;
    while (temp) {
        Node* next = temp->next;
        free(temp);
        temp = next;
    }
    *ptr = NULL;
    printf("All nodes deleted\n");
}

int main() { 
    add_begin(&headptr, 10);
    add_begin(&headptr, 20);
    add_end(&headptr, 30);
    add_end(&headptr, 40);
    printf("After inserts: ");
    print(headptr);

    printf("Count: %d\n", count(headptr));

    search_node(headptr, 30);
    search_node(headptr, 50);

    delete_node(&headptr, 30);
    printf("After deleting 30: ");
    print(headptr);

    sort_nodes(&headptr);
    printf("After sorting: ");
    print(headptr);

    reverse_link(&headptr);
    printf("After reversing links: ");
    print(headptr);

    printf("Recursive print: ");
    print_rec(headptr);

    printf("Reverse recursive print: ");
    reverse_rec(headptr);
    printf("NULL\n");

    delete_all(&headptr);
    printf("After deleting all: ");
    print(headptr);

    return 0;
}