#include <stdio.h>
int main(){
    float m,n;
    char c;
    scanf("%f",&m);
    scanf("%f",&n);
    scanf("%c",&c);
    if(c=='+')
    printf("%.0f",m+n);
    else if(c=='-')
    printf("%.0f",m-n);
    else if(c=='*')
    printf("%.0f",m*n);
    else if(c=='/'){
        if(n!=0){
            printf("%.0f",m/n);
        }
        else{
            printf("error");
        }
    }
    else
    printf("error");   
    return 0;
}