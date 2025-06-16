#include <stdio.h>

int main() {
    // Cách 1:
    // int arr[] = {1,2,3,4,5,2,7,8,9,10};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // int count = 0;
    // for (int i = 0; i < size; i++) {
    //     for (int j = 0; j < size; j++) {
    //         if (arr[i] == arr[j]) {
    //             count++;
    //         }
    //     }
    // }
    // if (count < 0 ) {
    //     printf("Không có trùng lặp trong mảng");
    // } else {
    //     printf("Mảng có tồn tại trùng lặp");
    // }
    // Độ phức tạp thời gian O(n^2)

    // Cách 2:
    int arr[] = {6, 2, 8, 9, 2, 4, 5, 6, 3, 4, 10, 18, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        if (arr[i] == arr[i + 1]) {
            count++;
        }
    }
    if (count < 0) {
        printf("Mảng không tồn tại trùng lặp");
    } else {
        printf("Mảng tồn tại trùng lặp");
    }
    return 0;
    // Độ phức tạp thời gian O(n)
}
