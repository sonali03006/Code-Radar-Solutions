#include <stdio.h>
int main(){
    float x,y;
    char c;
    scanf("%f %f",&m,&n);
    scanf("%c",&c);
    if(c=='+')
    printf("%f",m+n);
    else if(c=='-')
    printf("%f",m-n);
    else if(c=='*')
    printf("%f",m*n);
    else if(c=='/'&&m>0&&n>0)
    printf("%f",m/n);
    else if(c=='/'&&n==0)
    printf("error");
    else{
        printf("error");   }
    return 0;
}