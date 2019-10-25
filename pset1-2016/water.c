#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int shower;
    int wb;
    
    printf("length of your shower in minutes: ");
    shower = GetInt();
    
    wb = shower * 12;
    
    printf("Water bottles: %i\n", wb);
}
