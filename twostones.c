#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    if(N % 2 == 1){
        printf("Alice\n");
    } else {
        printf("Bob\n");
    }
    return 0;
}