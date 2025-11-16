#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL, *newNode;
    int value, choice;

    do {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter data: ");
        scanf("%d", &value);

        newNode->data = value;
        newNode->next = head;   // insert at beginning
        head = newNode;

        printf("Add another node? (1-Yes / 0-No): ");
        scanf("%d", &choice);
    } while(choice);

    printf("\nLinked List: ");
    struct Node *temp = head;
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}
