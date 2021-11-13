#include <stdio.h>

int main()
{

    char name;
    int number, age;

    printf("Type your name : ");
    scanf("%c", &name);
    printf("Type your # number e.g(#1234): ");
    scanf("%d", &number);
    printf("Type your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are allowed to enter");
    }
    else
    {
        printf("You are not allowed to enter");
    }

    return 0;
}
