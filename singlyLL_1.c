// #include <stdio.h>
// #include <stdlib.h>

// // Define the Node structure
// typedef struct Node {
//     int data;
//     struct Node* next;
// } Node;

// // Function to create a new node
// Node* createNode(int data) {
//     Node* newNode = (Node*)malloc(sizeof(Node));
//     if (newNode == NULL) {
//         printf("Memory allocation failed!\n");
//         exit(1);
//     }
//     newNode->data = data;
//     newNode->next = NULL;
//     return newNode;
// }

// // Insert at the beginning
// void insertAtBeginning(Node** head, int data) {
//     Node* newNode = createNode(data);
//     newNode->next = *head; // Point new node to current head
//     *head = newNode;       // Update head to new node
// }

// // Insert at the end
// void insertAtEnd(Node** head, int data) {
//     Node* newNode = createNode(data);
//     if (*head == NULL) {
//         *head = newNode; // If list is empty, new node is head
//         return;
//     }
//     Node* temp = *head;
//     while (temp->next != NULL) {
//         temp = temp->next; // Traverse to the last node
//     }
//     temp->next = newNode; // Link last node to new node
// }

// // Print the linked list
// void printList(Node* head) {
//     if (head == NULL) {
//         printf("List is empty!\n");
//         return;
//     }
//     Node* temp = head;
//     while (temp != NULL) {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
// }

// // Free the linked list
// void freeList(Node** head) {
//     Node* temp;
//     while (*head != NULL) {
//         temp = *head;
//         *head = (*head)->next;
//         free(temp);
//     }
// }

// int main() {
//     Node* head = NULL; // Initialize empty list

//     // Test operations
//     insertAtBeginning(&head, 10);
//     insertAtBeginning(&head, 20);
//     insertAtEnd(&head, 30);
//     insertAtEnd(&head, 40);

//     printf("Linked List: ");
//     printList(head);

//     // Clean up memory
//     freeList(&head);
//     return 0;
// }                          


              //same but different way 
            
            
            
#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int data;
    struct Node* next;
};

// Function to insert at the beginning
void insertAtBeginning(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

// Function to insert at the end
void insertAtEnd(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to delete node at beginning
void deleteAtBeginning(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

// Function to delete node at end
void deleteAtEnd(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }

    struct Node* temp = *head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;
}

// Function to print the list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function to demonstrate operations
int main() {
    struct Node* head = NULL;

    // Insert operations
    insertAtBeginning(&head, 10); // List: 10
    insertAtBeginning(&head, 5);  // List: 5 -> 10
    insertAtEnd(&head, 20);       // List: 5 -> 10 -> 20
    insertAtEnd(&head, 25);       // List: 5 -> 10 -> 20 -> 25

    printf("Linked List: ");
    printList(head);

    // Delete operations
    deleteAtBeginning(&head);     // List: 10 -> 20 -> 25
    deleteAtEnd(&head);           // List: 10 -> 20

    printf("After Deletion: ");
    printList(head);

    return 0;
}
