#include <stdio.h>
int main(){
    int x,y;
    char ch;
    scanf("%d %d %c",&x,&y,&ch);
    int sum = %d+%d;
    int sub =%d-%d;
    int mul =%d*%d;
    int div = %d/%d;
    if(ch=='+'){
        printf("%d",sum);
    }
    else if(ch=='-'){
        printf("%d",sub);
    }
    else if(ch==*){
        printf("%d",mul);
    }
    else if(ch==/){
        printf("%d",div);
    }
    else{
        printf("Error");
    }
    return 0;
}