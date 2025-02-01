#include <stdio.h>
int main(){
    int x,y;
    scanf("%d",&x);
    if(x%y==0||y%x==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}