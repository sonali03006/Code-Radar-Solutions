#include <stdio.h>
int main(){
    int n;
    scanf("%d",rows);
    for(int i=1;i<=n;i++){
        for(int j=1;i<=n-i;j++){
            printf("*");
        }
    }
    return 0;
}