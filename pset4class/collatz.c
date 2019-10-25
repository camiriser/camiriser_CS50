#include <stdio.h>
#include <cs50.h>
#include <math.h>

int collatz(int n);

int main (void)
{
    int x = GetInt();
    printf("%i\n", collatz(x));
}

int collatz(int n)
{
    if(fmod(n, 2) == 0)
    {
        return 1 + collatz(n/2);
    }
    else if(fmod(n, 2) != 0 && n != 1)
    {
        return 1 + collatz((3*n)+1);
    }
    else
    {
        return 0;
    }
}
