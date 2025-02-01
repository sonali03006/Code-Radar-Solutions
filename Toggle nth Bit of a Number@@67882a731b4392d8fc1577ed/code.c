#include <stdio.h>
int toggleNthBit(int,num,int n){
    return num^(1<<n);
int main(){
    int num, n;
    scanf("%d %d",&num,&n);
    int result = toggleNthBit(num,n);
    printf("%d %d",n,result);
    return 0;
}    
}