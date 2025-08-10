#include <stdio.h>
int main() {
    int n, arr[100];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int count = 0;
    for(int i = 0; i < n; i++)
        if(arr[i] != 0)
            arr[count++] = arr[i];
    while(count < n) arr[count++] = 0;
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}