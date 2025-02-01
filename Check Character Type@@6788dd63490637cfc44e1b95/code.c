#include <stdio.h>
int main(){
    char  x;
    scanf("%c",&x);
    if(x='a'||x='e'||x='i'||x='o'||x='u'){
        printf("Vowel %c");
    }
    else if(x>='a'&&x<='z'){
        printf("Consonant %c");
    }
    else if(x>=0&&x<=9){
        printf("Digit %c");
    }
    else{
        printf("Special Character %c");
    }
    return 0;
}