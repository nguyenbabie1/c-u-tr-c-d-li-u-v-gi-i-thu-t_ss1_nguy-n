#include <stdio.h>

int main() {
    int arr[] = {1, 3, 2, 1, 4, 1, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxCount = 0;
    int check = arr[0];
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            check = arr[i];
        }
    }
    printf("Phần tử xuất hiện nhiều nhất %d", check);
    return 0;
    // Độ phức tạp thời gian là O(n^2)
}