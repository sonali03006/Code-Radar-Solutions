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
    else if(c=='/')
    printf("%f",m/n);
    else{
        printf("Error");   }
    return 0;
}