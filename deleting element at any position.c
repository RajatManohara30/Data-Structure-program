#include <stdio.h>

int main() {
    int arr[10];
    int i, pos;

    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to delete (1 to 10): ");
    scanf("%d", &pos);

    if (pos < 1 || pos > 10) {
        printf("Invalid position!\n");
        return 0;
    }

    for (i = pos - 1; i < 9; i++)
        arr[i] = arr[i + 1];

    printf("Array after deletion:\n");
    for (i = 0; i < 9; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
