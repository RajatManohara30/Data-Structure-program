#include <stdio.h>

int main() {
    int arr[11];  // One extra space to allow insertion
    int i, pos, elem;

    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to insert (1 to 11): ");
    scanf("%d", &pos);
    printf("Enter element to insert: ");
    scanf("%d", &elem);

    if (pos < 1 || pos > 11) {
        printf("Invalid position!\n");
        return 0;
    }

    for (i = 10; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = elem;

    printf("Array after insertion:\n");
    for (i = 0; i < 11; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
