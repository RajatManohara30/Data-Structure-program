#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        printf("\nStack Overflow! Cannot push %d.\n", value);
    } else {
        top++;
        stack[top] = value;
    }
}

void pop() {
    if (top == -1) {
        printf("\nStack Underflow! Cannot pop.\n");
    } else {
        printf("\nPopped %d from the stack.\n\n", stack[top]);
        top--;
    }
}

void display() {
    if (top == -1) {
        printf("\nStack is empty.\n");
    } else {
        printf("\nStack elements: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    push(10);
    push(20);
    push(30);

    printf("Before pop:");
    display();

    pop();

    printf("After pop:");
    display();

    return 0;
}
