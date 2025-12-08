// Insertion Sort Ascending Order
#include <stdio.h>

void insertionSort(int arr[], int n){
    for(int i=1; i < n; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main(){
    int n;
    printf("Enter the Array size: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Enter your %d element: ", i+1);
        scanf("%d", &arr[i]);
    }
    insertionSort(arr, n);
    printf("Your Sorted Array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}