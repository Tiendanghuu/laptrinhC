#include <stdio.h>

int main() {
    int n, i;
    int t[n];
    int tong = 0;
    int dem = 0;
    float tbc;

    printf("Nhap n = ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("t[%d] = ", i);
        scanf("%d", &t[i]);
    }
    for(i = 0; i < n; i++) {
        if(i % 2 == 0 && t[i] % 2 != 0) {
            tong += t[i];
            dem++;
        }
    }
    if(dem > 0) {
        tbc = (float)tong / dem;
        printf("Trung binh cong cac so le o vi tri chan = %.2f", tbc);
    }
    else {
        printf("Khong co so le o vi tri chan");
    }
}
