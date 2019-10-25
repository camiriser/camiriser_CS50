#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    double change;
    
    
    do
    {
        printf("How much change is owed: ");
        change = GetDouble();
    }
    while(change <= 0.00);
    
    int contador = 0.00;
    
    change = change * 100;
    double round(double change);
    //printf("%.50f\n", change);
    
    while (change >= 1.00)
    {
        if (change >= 25.00 )
        {
            contador++;
            change = change - 25.00;
        }
        else if (change >= 10.00)
        {
            contador++;
            change = change - 10.00;
        }
        else if (change >= 5.00)
        {
            contador++;
            change = change - 5.00;
        }
        else  if (change >= 1)
        {
            contador++;
            change = change - 1.00;
        }
    }
    
    printf("%i\n", contador);
}