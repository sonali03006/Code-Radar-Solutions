#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}