// Selection Sort Lexicographical Order
#include <stdio.h>
#include <string.h>

int main(){
    int n, min_index;
    printf("Enter the Array size: ");
    scanf("%d", &n);
    char arr[n][100];
    for(int i = 0; i < n; i++){
        printf("Enter the strings:\n");
        scanf("%s", arr[i]);
    }
    for(int i = 0; i < n; i++){
        min_index = i;
        for(int j = i + 1; j < n; j++){
            if(strcmp(arr[j], arr[min_index]) < 0){
                min_index = j;
            }
        }
        if(min_index != 0){
            char temp[100]; 
            strcpy(temp, arr[i]);
            strcpy(arr[i], arr[min_index]);
            strcpy(arr[min_index], temp);
        }
    }
    printf("Your Sorted Array: \n");
    for(int i = 0; i < n; i++){
        printf("%s\n", arr[i]);
    }
}