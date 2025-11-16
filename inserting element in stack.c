include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        printf("\nStack Overflow! Cannot push %d.\n", value);
    } else {
        top++;
        stack[top] = value;
        printf("Pushed %d into the stack.\n\n", value);
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
    int value;
    printf("enter the first number = ");
    scanf("%d",&value);
    push(value);
 
    printf("enter the second number = ");
    scanf("%d",&value);
    push(value);
 
    printf("enter the third number = ");
    scanf("%d",&value);
    push(value);
 
    printf("enter the forth number = ");
    scanf("%d",&value);
    push(value);
 
    printf("enter the fifth number = ");
    scanf("%d",&value);
    push(value);

    display();
    return 0;
}
