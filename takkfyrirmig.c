#include <stdio.h>
int main() {
    int n;
    char nama[101];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", nama);
        printf("Takk %s\n", nama);
    }
    return 0;
}