#include <stdio.h>

int main() {
    int n;
    int S = 0;
    int so;

    printf("Nhap n = ");
    scanf("%d", &n);

    while (n > 0) {
        so = n % 10;
        S = S + so;
        n = n / 10;
    }

    printf("Tong cac chu so = %d", S);
}
