#include<stdio.h>
int main(){
    int num, n , result;
    scanf("%d",&num);
    scanf("%d",&n);
    result = num &~(1<<n);
    printf("%d %d",n, result);
    return 0;
}