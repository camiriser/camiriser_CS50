#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (void)
{
    char* s = GetString();
    char* t = GetString();
    
    if( s != NULL && t != NULL)
    {
        if(strcmp(s, t) == 0)
        {
            printf("you print the same things \n");
        }
        else
        {
            printf("you print the different things \n");
        }
    }
    
}