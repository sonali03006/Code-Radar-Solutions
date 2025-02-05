#include <stdio.h>
int main(){
    char  x;
    scanf("%c",&x);
    if(x==65||x==69||x==73||x==79||x==85||x==97||x==101||x==105||x==111||x==117){
        printf("Vowel");
    }
    else if(x>=48&&x<=57){
        printf("Digit");
    }
    else if((x>=0&&x<=47)||(x>=58&&x<=64)){
        printf("Special Character");
    }
    else{
        printf("Consonant");
    }
    return 0;
}