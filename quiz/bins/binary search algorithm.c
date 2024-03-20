#include <stdio.h>

int binary_search(int a[], int n, int key) {
    int low = 0;
    int high = n - 1;
    
    while (low <= high) {
        int mid = (low + high) / 2;
        
        if (a[mid] == key) {
            return mid;
        }
        else if (a[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    
    return -1;
}

int main() {
    int v1[] = {2, 4, 6, 8, 10};
    int n1 = sizeof(v1) / sizeof(v1[0]);
    int key1 = 6;
    int result1 = binary_search(v1, n1, key1);
    
    int v2[] = {1, 3, 5, 7, 9};
    int n2 = sizeof(v2) / sizeof(v2[0]);
    int key2 = 4;
    int result2 = binary_search(v2, n2, key2);
    
    return 0;
}