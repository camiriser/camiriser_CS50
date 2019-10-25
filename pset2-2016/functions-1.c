#include <cs50.h>
#include <stdio.h>

int GetPositiveInt(void); 

int main(void)

{   
    int n = GetPositiveInt();
    printf("thanks %i\n", n);
}

int GetPositiveInt(void)
{
    int n;
    do
    {
        printf("Please give a positive int ");
        n = GetInt();
    }
    while (n < 1);
    return n; 
}