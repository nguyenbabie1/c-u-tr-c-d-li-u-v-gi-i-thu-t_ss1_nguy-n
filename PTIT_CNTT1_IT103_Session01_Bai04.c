#include <stdio.h>

int main() {
    int n = 10;
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += i;
    }
    printf("%d\n", sum);
    // Độ phức tạp của đoạn code trên là O(n)
    return 0;
}