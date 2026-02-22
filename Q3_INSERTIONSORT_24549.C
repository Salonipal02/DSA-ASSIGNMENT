#include <stdio.h>
int main() {
    int arr[] = {84, 21, 96, 35, 56, 52, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Before Insertion Sort\n");
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    for (int i=1; i<size; i++) {
        int key = arr[i];
        int j= i-1;
        while (j>=0 &&key< arr[j]) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }   
    printf("After Insertion Sort\n");
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    
    return 0;