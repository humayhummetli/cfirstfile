#include <stdio.h>

int main() {
    int n,b=10;
    scanf("%d",&n);
    while(n>0){
        if (n%10<b){
            b=n%10;
        }
        else {
            printf("NO");
            return 0;
        }
        n=n/10;
    }
    printf("YES");
    return 0;
}
