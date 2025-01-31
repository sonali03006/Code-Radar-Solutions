#include <stdio.h>
int main(){
    int x,n;
    scanf("%d",&x);
    scanf("%d",&n);
    int value=(x>>n)&1;
    printf("%d",value);
    return 0;
}