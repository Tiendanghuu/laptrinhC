#include <stdio.h>

int main() {
    int a, b, r;
    int ucln, bcnn;

    printf("Nhap a = ");
    scanf("%d", &a);

    printf("Nhap b = ");
    scanf("%d", &b);

       while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    ucln = a;
    bcnn = (a * b) / ucln;

    printf("UCLN = %d\n", ucln);
    printf("BCNN = %d\n", bcnn);
}
