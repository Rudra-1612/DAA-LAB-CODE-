// Write down a sorting code which has (worst/avg/best) case recurrence relation
// T(n) = T(n-1) + n

#include <stdio.h>

int main() {
    
    int arr[] = {9, 6, 22, 45, 55, 32};
    int n = 6;
    
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j + 1] = key;
    }
    
    printf("Sorted array : ");
    
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    return 0;
}