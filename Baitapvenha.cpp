#include <stdio.h>
int main() {
    int n, dao = 0, du;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    while (n != 0) {
        du = n % 10;
        dao = dao * 10 + du;
        n = n / 10;
    }
    printf("So dao nguoc la: %d", dao);
}
