#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x==1||x==3||x==5||x==7||x==8||x==10||x==12){
        printf("31");
    }
    else if(x==2){
        printf("28");
    }
    else if(x==4||x==6||x==9||x==11){
        printf("30");
    }
    else{
        printf("Invalid month");
    }
    return 0;
}