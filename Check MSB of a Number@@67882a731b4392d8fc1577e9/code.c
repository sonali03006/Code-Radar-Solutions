#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x|1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}