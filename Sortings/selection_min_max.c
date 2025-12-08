#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int num[n], max, i, min;
    for(i=0; i<n; i++){
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
    }
    max = num[0];
    for(i=1; i<n; i++){
        if(num[i] > max){
            max = num[i];
        }
    }
    min = num[0];
    for(i=1; i<n; i++){
        if(num[i] < min){
            min = num[i];
        }
    }
    printf("Maximum number is: %d\n", max);
    printf("Minimum number is: %d\n", min);
    return 0;
}