#include <stdio.h>

int main() {
    int a,b;
    scanf("%d",&a);
    b=(a/1000)+((a/100)%10)*10+((a/10)%10)*100+a%10*1000;
    if (a==b) printf("YES");
    else printf("NO");
}
