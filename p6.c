#include <stdio.h>
int main() {
    int n, flag = 1;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    for(int i=1; i<n; i++) {
        if(arr[i] < arr[i-1]) {
            flag = 0;
            break;
        }
    }
    if(flag) printf("Array is sorted\n");
    else printf("Array is not sorted\n");
    return 0;
}