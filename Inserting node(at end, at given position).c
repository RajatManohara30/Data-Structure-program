#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insertEnd(int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    
    if(head == NULL) {
        head = newNode;
        return;
    }

    struct Node *temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

void insertAtPosition(int value, int pos) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    if(pos == 0) {  // insert at start
        newNode->next = head;
        head = newNode;
        return;
    }

    struct Node *temp = head;
    for(int i = 0; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if(temp == NULL) {
        printf("Invalid position!\n");
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);

    int value, pos;

    printf("Enter value to insert at end: ");
    scanf("%d", &value);
    insertEnd(value);

    printf("\n\nEnter value to insert(at any position): ");
    scanf("%d", &value);
    printf("Enter position: ");
    scanf("%d", &pos);
    insertAtPosition(value, pos);

    printf("\nLinked List: ");
    struct Node *temp = head;
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}
