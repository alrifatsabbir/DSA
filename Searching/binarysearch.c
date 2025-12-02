#include <stdio.h>

int main() {
    int n, target;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        printf("Enter the %d element: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you wanted: ");
    scanf("%d", &target);
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) {
            printf("Found at %d\n", mid+1);
            return 0;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    printf("Not found\n");
    return 0;
}
