#include <stdio.h>
int main()
{
    char name[100];
    int age;
    printf("enter your name:\n");
    scanf("%s", &name);
    printf("enter the age:\n");
    scanf("%d", &age);
    printf("name: %s\n", name);
    printf("age: %d", age);
    return 0;
}