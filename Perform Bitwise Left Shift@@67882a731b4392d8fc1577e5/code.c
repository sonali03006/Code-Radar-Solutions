#include <stdio.h>
int main(){
    int x,shift;
    scanf("%d",&x);
    scanf("%d",&shift);
    int result=x << shift;
    printf("%d",result);
    return 0;
}