#include <stdio.h>

int main() {
    int i, n, j, num, pos, arr[20];

    printf("Enter the No. of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\narr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the No. to be inserted: ");
    scanf("%d", &num);

    // Find the position to insert the new number
    for (pos = 0; pos < n; pos++) {
        if (arr[pos] > num) {
            break;
        }
    }

    // Shift elements to the right to make space for the new number
    for (j = n; j > pos; j--) {
        arr[j] = arr[j - 1];
    }

    // Insert the new number
    arr[pos] = num;
    n = n + 1;

    printf("The array after insertion is:");
    for (i = 0; i < n; i++) {
        printf("\narr[%d] = %d", i, arr[i]);
    }

    return 0;
}
