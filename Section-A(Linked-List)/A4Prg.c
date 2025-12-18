#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node *next;
};

struct Node *last = NULL;

// Insert at end
void insertEnd(int value) {
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;

    if (last == NULL) {
        last = newNode;
        newNode->next = last;   
    } else {
        newNode->next = last->next;
        last->next = newNode;
        last = newNode;
    }
}

// Delete from beginning
void deleteBegin() {
    if (last == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node *temp = last->next;

    if (last->next == last) {
        last = NULL;
    } else {
        last->next = temp->next;
    }

    free(temp);
    printf("First node deleted\n");
}

// Display the list
void display() {
    if (last == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node *temp = last->next;

    printf("Circular Linked List: ");
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != last->next);

    printf("(back to head)\n");
}

// Main function
int main() {

    // Insert nodes
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);

    // Display list
    display();

    // Delete first node
    deleteBegin();

    // Display list again
    display();

    return 0;
}
