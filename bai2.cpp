#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int is_square(int x) {
    if (x < 0) {
        return 0;
    }
    int sqrt_x = (int)sqrt((double)x);
    return sqrt_x * sqrt_x == x;
}


int count_squares(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (is_square(i)) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    printf("Nhập số nguyên dương n: ");
    scanf("%d", &n);

    // Đếm số lượng số chính phương
    int count = count_squares(n);

    // In ra các số chính phương
    printf("Có %d số chính phương nhỏ hơn %d:\n", count, n);
    for (int i = 1; i <= n; i++) {
        if (is_square(i)) {
            printf("%d ", i);
        }
    }

    


    return 0;
}
