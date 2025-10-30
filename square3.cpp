#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j+i>n-1) printf("%d",0);
            else if(j+i==n-1) printf("%d",1);
            else printf("%d",2);
        }
        printf("\n");
    }
    return 0;
