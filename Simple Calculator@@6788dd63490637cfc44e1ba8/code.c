#include <stdio.h>
int main(){
    int m,n;
    char c;
    scanf("%d %d %c",&m,&n,&c);
    if(c=='+')
    printf("%d",m+n);
    else if(c=='-')
    printf("%d",m-n);
    else if(c=='*')
    printf("%d",m*n);
    else if(c=='/'){
        if(n!=0)
        printf("%d",m/n);
        else
        printf("error");
    }
    else
    printf("error"); 
    return 0;
}