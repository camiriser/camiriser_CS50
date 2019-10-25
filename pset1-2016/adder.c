#include <cs50.h>
#include <stdio.h>

int main (void)
{
    printf("Please give me an int; ");
    int x = GetInt();
    
    printf("please give me another int; ");
    int y = GetInt();
    
    printf(" the sum of %d and %d is: %d\n", x, y, x + y);
    
}
