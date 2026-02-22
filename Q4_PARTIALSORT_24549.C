#include <stdio.h>
void printArr(int arr[], int n)
{
    for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {10, 3, 40, 20, 50, 80, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("original array:");
    printArr(arr, n);
    int key = 70;
    int s = 0, x = (n - 1);
    int mid = s + ((x - s) / 2);
    int keyIndex = -1;
    while (s <= x)
    {
        mid = s + ((x- s) / 2);
        if (key == arr[mid])
        {
            keyIndex = mid;
            break;
        }
        if (mid > 0 && arr[mid - 1] == key)
        {
            keyIndex = mid - 1;
            break;
        }
        if (mid < (n - 1) && arr[mid + 1] == key)
        {
            keyIndex = mid + 1;
            break;
        }
        if (arr[mid] > key)
            x = mid - 2;
        else
            s = mid + 2;
    }
    if (keyIndex!= -1)
    {
        printf("%d found at index %d\n", key, keyIndex);
    }
    else
    {
        printf("%d not found\n", key);
    }
    printf("Sorted Array:");
    int i = 0;
    while(i < (n - 1)) {
        if (arr[i] > arr[i+1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
        i++;
    }
    printArr(arr, n);
    return 0;
}