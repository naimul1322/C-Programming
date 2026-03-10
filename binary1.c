#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if target is present at mid
        if (arr[mid] == target)
            return mid;

        // If target greater, ignore left half
        if (arr[mid] < target)
            left = mid + 1;

        // If target is smaller, ignore right half
        else
            right = mid - 1;
    }

    // Target not found in array
    return -1;
}

int main() {
    int size, target;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array in sorted order:\n");
    for (int i = 0; i < size; ++i)
        scanf("%d", &arr[i]);

    printf("Enter the target element to search: ");
    scanf("%d", &target);

    int index = binarySearch(arr, size, target);

    if (index != -1)
        printf("Element found at index %d.\n", index);
    else
        printf("Element not found in the array.\n");

    return 0;
}
