#include <stdio.h>
int main(){
    char name[100],hobby[100];
    int age;
    scanf("%s %s %d",&name , &hobby, &age);
    printf("Name: %s \n Age: %d \n Hobby: %s",name, age , hobby);

    return 0;
}