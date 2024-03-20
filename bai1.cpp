#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void inBoi7(int a, int b) {
    // Kiểm tra a và b hợp lệ
    if (a > b || a < 10 || b > 99) {
        printf("Khoảng giá trị không hợp lệ!\n");
        return;
    }

    // Duyệt từ a đến b và in ra các bội của 7
    for (int i = a; i <= b; i++) {
        if (i % 7 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
}

int main() {
    int a, b;

    // Nhập giá trị a và b
    printf("Nhập giá trị a: ");
    scanf("%d", &a);
    printf("Nhập giá trị b: ");
    scanf("%d", &b);

    // Gọi hàm inBoi7
    inBoi7(a, b);

    return 0;
}
