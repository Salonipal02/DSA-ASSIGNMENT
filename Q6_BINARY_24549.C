#include <stdio.h>
int binarySearch(int arr[], int item, int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == item)
            return mid + 1;
        else if (arr[mid] < item)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}
void insertionSort(int arr[], int n) {
    int i, j, key, pos;

    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        pos = binarySearch(arr, key, 0, j);
        while(j >= pos) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main() {
    int arr[] = {37, 23, 0, 17, 12, 72, 31};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    printArray(arr, n);

    insertionSort(arr, n);

    printf("\nSorted array: ");
    printArray(arr, n);

    return 0;
}