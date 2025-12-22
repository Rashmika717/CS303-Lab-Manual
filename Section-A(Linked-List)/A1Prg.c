#include <stdio.h>

struct Node {
    int data;
    int next;
};

struct Node list[10];
int head = -1;
int freePos = 0;

void createNode(int value) {
    if (freePos >= 10) {
        printf("List is full\n");
        return;
    }

    list[freePos].data = value;
    list[freePos].next = head;
    head = freePos;
    freePos++;
}

void display() {
    int temp = head;

    if (temp == -1) {
        printf("List is empty\n");
        return;
    }

    printf("Linked List: ");
    while (temp != -1) {
        printf("%d -> ", list[temp].data);
        temp = list[temp].next;
    }
    printf("NULL\n");
}

int main() {
    createNode(10);
    createNode(20);
    createNode(30);

    display();

    return 0;
}
