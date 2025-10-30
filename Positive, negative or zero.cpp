#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    if (x<0) printf("Negative");
    else if (x==0) printf("Zero");
    else printf("Positive");
    
    return 0;
}
