#include <stdio.h>
int main() {
    char nama[101];
    int x;
    scanf("%s", nama);
    scanf("%d", &x);
    for (int i = 0; i < x; i++) {
        printf("Hipp hipp hurra, %s!\n", nama);
    }
    return 0;
}