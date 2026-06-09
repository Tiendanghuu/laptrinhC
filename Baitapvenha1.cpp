#include <stdio.h>

int main() {
    int n, i;
    int t[n];
    int tongLe = 0;
    int dem = 0;
    float tbc;

    printf("Nhap n = ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("t[%d] = ", i);
        scanf("%d", &t[i]);
    }
    for(i = 0; i < n; i++) {
        if(t[i] % 2 != 0) {
            tongLe += t[i];
            dem++;
        }
    }
    if(dem > 0) {
        tbc = (float)tongLe / dem;
        printf("Trung binh cong cac so le = %.2f", tbc);
    } else {
        printf("Khong co so le trong mang");
    }
}
