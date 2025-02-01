#include<stdio.h>
int main(){
    int num, n;
    scanf("%d %d",&num,&n);
    int result = clearNthBit(num,n);
    printf("%d %d",n, result);
    return 0;
}