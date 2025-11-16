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

void peek() {
    if (top == -1) {
        printf("\nStack is empty! Nothing to peek.\n");
    } else {
        printf("\nTop element is: %d\n", stack[top]);
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
    push(5);
    push(15);
    push(25);

    display();
    peek();

    return 0;
}
