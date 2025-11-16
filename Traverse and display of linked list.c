#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL, *newNode, *temp;
    int value, choice;

    do {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter data: ");
        scanf("%d", &value);

        newNode->data = value;
        newNode->next = NULL;

        if(head == NULL)
            head = newNode;
        else {
            temp = head;
            while(temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }

        printf("Add another node? (1-Yes / 0-No): ");
        scanf("%d", &choice);
    } while(choice);

    printf("\nLinked List: ");
    temp = head;
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}
