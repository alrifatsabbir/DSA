#include <stdio.h>

int main(){
    int n, min_index;
    printf("Enter Array Size: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n ; i++){
        printf("Enter your %d element: \n", i+1);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n - 1; i++){
        min_index = i;          
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[min_index])
                min_index = j;     
        }
        if(min_index != i){
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
    printf("Sorted Array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}