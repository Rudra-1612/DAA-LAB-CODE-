#include <stdio.h>

int main() {
    int n, key, mid;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter sorted array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1;
    int found = 0;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            printf("Index %d : Found\n", mid);
            found = 1;
            break;
        } 
        else {
            printf("Index %d : Not Found\n", mid);

            if(arr[mid] < key) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }

    if(found == 0) {
        printf("Element not present in the array\n");
    }

    return 0;
}