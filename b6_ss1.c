#include <stdio.h>

int main() {
    int arr[] = {1, 2, 4, 6, 9, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int check = 4;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == check) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
