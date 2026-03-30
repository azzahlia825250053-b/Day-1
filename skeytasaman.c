#include<stdio.h>
#include<string.h>
int main(){
    char s[105], t[105];
    fgets(s, sizeof(s), stdin);
    fgets(t, sizeof(t), stdin);
    
    s[strcspn(s, "\n")] = 0;
    t[strcspn(t, "\n")] = 0;
    
    printf("%s%s\n", s, t);
    return 0;
}