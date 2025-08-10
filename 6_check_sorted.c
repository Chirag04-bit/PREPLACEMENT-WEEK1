#include <stdio.h>
int main() {
    int n, arr[100], flag = 1;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for(int i = 1; i < n; i++) {
        if(arr[i] < arr[i-1]) {
            flag = 0;
            break;
        }
    }
    printf(flag ? "Yes" : "No");
    return 0;
}