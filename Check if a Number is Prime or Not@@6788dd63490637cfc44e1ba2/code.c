#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
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