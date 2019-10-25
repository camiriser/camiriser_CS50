#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int height = 0;
    do
    {
        height = get_int(); 
    }
    while (height < 0 || height > 23);
    
    int columns = (height*2) + 1;
    
    for (int i = 0; i < height; i++)
        {
            for (int j = 0; j <= columns; j++)
            {
               if(i + j < height - 1 || j == height || j == height + 1|| columns - j + i < height - 1)
             {
                   printf(" ");
                   if (j == columns)
                   {
                       printf("\n");
                   }
               }
               
               else
               {
                   printf("#");
                   if (j == columns)
                   {
                       printf("\n");
                   }
               }
            }
        }
}


