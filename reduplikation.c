#include<stdio.h>
int main(){
    char s[11];
    int n;
    scanf("%s", s);
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        printf("%s", s);
    }
    printf("\n");
    return 0;
    
}