#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Please give an integer between 1 and 10: ");
    int n = GetInt();
    
    if (n >= 1 && n <= 3)
    {
        printf("You picked up a small number: \n");
    }
    else if (n >= 4 && n <= 7)
    {
        printf("You picked up a medium number: \n");
    }
    else if (n >= 8 && n <= 10)
    {
        printf("You picked up a big number: \n");
    }
    else
    {
        printf("You picked up a invalid number: \n");
    }
}