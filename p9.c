#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n], visited[n];
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0;
    }
    for(int i=0; i<n; i++) {
        if(visited[i]) continue;
        int count = 1;
        for(int j=i+1; j<n; j++) {
            if(arr[i] == arr[j]) {
                visited[j] = 1;
                count++;
            }
        }
        printf("%d occurs %d times\n", arr[i], count);
    }
    return 0;
}