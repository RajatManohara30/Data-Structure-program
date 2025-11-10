#include <stdio.h>

int main() {
    int arr[10], elem;
    int low = 0, high = 9, mid, found = 0;

    printf("Enter 10 elements in sorted order:\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &elem);

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == elem) {
            printf("Element %d found at position %d.\n", elem, mid + 1);
            found = 1;
            break;
        } else if (arr[mid] < elem)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (!found)
        printf("Element %d not found in the array.\n", elem);

    return 0;
}
