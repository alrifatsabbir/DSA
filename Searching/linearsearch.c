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
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Found at %d\n", i+1);
            return 0;
        }
    }
    printf("Not found\n");
    return 0;
}
