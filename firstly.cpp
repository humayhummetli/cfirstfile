#include <stdio.h>

int main() {
    float x,y,z,sum,mul;
    scanf("%f%f%f",&x,&y,&z);
    sum=x+y+z;
    mul=x*y*z;
    printf("%.4f %.4f",sum,mul);
    return 0;
}
