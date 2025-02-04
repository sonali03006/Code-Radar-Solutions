#include <stdio.h>
int main(){
    float m,n;
    str c[200];
    scanf("%f",&m);
    scanf("%f",&n);
    scanf("%s",&c);
    if(c=='+')
    printf("%.0f",m+n);
    else if(c=='-')
    printf("%.0f",m-n);
    else if(c=='*')
    printf("%.0f",m*n);
    else if(c=='/' && m>0 && n>0)
    printf("%.0f",m/n);
    else if(c=='/'&&n==0)
    printf("error");
    else
        printf("error");   
    return 0;
}