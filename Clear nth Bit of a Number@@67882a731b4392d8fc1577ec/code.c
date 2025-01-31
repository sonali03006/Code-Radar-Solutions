#include <stdio.h>
int main(){
    int x,n,result;
    scanf("%d %d %d",&x,&n,&result);
    result = num & ~(1<<n);
    printf("%d",result);


    return 0;
}