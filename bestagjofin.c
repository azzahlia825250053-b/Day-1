#include<stdio.h>
#include <string.h>
int main(){
    int n, nilai, max;
    char nama[101], namaMax[101];
    scanf("%d", &n);
    scanf("%s %d", nama, &nilai);
    max = nilai;
    strcpy(namaMax, nama);
    for (int i = 2; i <= n; i++) {
        scanf("%s %d", nama, &nilai);
        if (nilai > max) {
            max = nilai;
            strcpy(namaMax, nama);
        }
    }
    printf("%s\n", namaMax);
    return 0;
}