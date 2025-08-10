#include <stdio.h>
int main() {
    int arr[100], n, elem;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &elem);
    arr[n] = elem;
    n++;
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}