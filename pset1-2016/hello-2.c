#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("state your name: ");
    string name = GetString();
    printf("hello, %s\n", name);
}