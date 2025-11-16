#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

// Function to insert at end (for creating initial list)
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

// Function to display linked list
void display() {
    struct Node *temp = head;
    printf("Linked List: ");
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Delete from beginning
void deleteBeginning() {
    if(head == NULL) {
        printf("List is empty!\n");
        return;
    }
    struct Node *temp = head;
    printf("Deleting from beginning: %d\n", temp->data);
    head = head->next;
    free(temp);
}

// Delete from end
void deleteEnd() {
    if(head == NULL) {
        printf("List is empty!\n");
        return;
    }

    if(head->next == NULL) {
        printf("Deleting from end: %d\n", head->data);
        free(head);
        head = NULL;
        return;
    }

    struct Node *temp = head;
    while(temp->next->next != NULL)
        temp = temp->next;

    printf("Deleting from end: %d\n", temp->next->data);
    free(temp->next);
    temp->next = NULL;
}

// Delete from a given position
void deleteAtPosition(int pos) {
    if(head == NULL) {
        printf("List is empty!\n");
        return;
    }

    if(pos == 0) {
        deleteBeginning();
        return;
    }

    struct Node *temp = head;
    for(int i = 0; i < pos - 1 && temp->next != NULL; i++)
        temp = temp->next;

    if(temp->next == NULL) {
        printf("Invalid position!\n");
        return;
    }

    struct Node *del = temp->next;
    printf("Deleting element at position %d : %d\n", pos, del->data);
    temp->next = del->next;
    free(del);
}

int main() {

    // i) Insert 10 elements
    printf("Inserting 10 elements...\n");
    for(int i = 1; i <= 10; i++)
        insertEnd(i * 10);  // inserts 10, 20, ..., 100

    display();

    // ii) Delete beginning
    deleteBeginning();
    display();

    // iii) Delete from given position
    int pos;
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    deleteAtPosition(pos);
    display();

    // iv) Delete from end
    deleteEnd();
    display();

    return 0;
}
