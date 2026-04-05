#include<stdio.h>
int main(){
    long long a, b;
    scanf("%lld", &a);
    scanf("%lld", &b);
    if (a > b) {
        printf("MAGA!\n");
    } else if (a < b) {
        printf("FAKE NEWS!\n");
    } else {
        printf("WORLD WAR 3!\n");
    }
    return 0;
}