
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int padding =  (4 - (4 * 3) % 4) % 4;
    printf("%i\n", padding);
}