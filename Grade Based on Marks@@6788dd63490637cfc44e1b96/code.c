#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x>=90){
        printf("A %d");
    }
    else if(x>=80&&x<90){
        printf("B %d");
    }
    else if(x>=70&&x<80){
        printf("C %d");
    }
    else if(x>=60&&x<70){
        printf("D %d");
    }
    else{
        printf("F %d");
    }
    return 0;
}