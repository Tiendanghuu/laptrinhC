#include <stdio.h>

int main() {
    int n, i, x;
    int t[n];
    int found = 0;

    printf("Nhap n = ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("t[%d] = ", i);
        scanf("%d", &t[i]);
    }
    printf("Nhap x = ");
    scanf("%d", &x);
    for(i = 0; i < n; i++) {
        if(t[i] == x) {
            found = 1;
            break;
        }
    }
    if(found == 1)
        printf("%d co trong mang", x);
    else
        printf("%d khong co trong mang", x);
}
