#include <stdio.h>

int main() {
    int n;

    // Ask the user for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Read elements from the user
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse the array elements
    int start = 0;
    int end = n - 1;
    while (start < end) {
        // Swap the elements at the start and end positions
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    // Print the reversed array
    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

