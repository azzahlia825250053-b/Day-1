#include<stdio.h>
int main(){
     int n, umur, min;
      scanf("%d", &n);
      scanf("%d", &min);
      for (int i = 2; i <= n; i++) {
        scanf("%d", &umur);
        if (umur < min) {
            min = umur;
        }
    }
    printf("%d\n", min);
    return 0;
}