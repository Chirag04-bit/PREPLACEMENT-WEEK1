#include <stdio.h>
int main() {
    int i,n, x;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n+1];
    printf("Enter %d elements: ", n);
    for( i=0; i<n; i++) scanf("%d", &arr[i]);
    printf("Enter element to insert at end: ");
    scanf("%d", &x);
    arr[n] = x;
    printf("Array after insertion: ");
    for( i=0; i<n+1; i++) printf("%d ", arr[i]);
    return 0;
}
