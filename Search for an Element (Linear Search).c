#include <stdio.h>

int main() {
    int arr[10], elem, found = 0;

    printf("Enter 10 elements:\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &elem);

    for (int i = 0; i < 10; i++) {
        if (arr[i] == elem) {
            printf("Element %d found at position %d.\n", elem, i + 1);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Element %d not found in the array.\n", elem);

    return 0;
}
