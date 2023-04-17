#include <stdio.h>

int main(){

    int age;
    char name[15];

    printf("what's your name?\n");
    //scanf("%s", &name);
    fgets(name, 15, stdin); // more than one name

    printf("how old are you?\n");
    scanf("%d", &age);

    printf("you are %d years old and your name is %s", age, name);



    return 0;
}