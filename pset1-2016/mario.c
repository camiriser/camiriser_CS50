#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do 
    {
        printf("Please give me de height: ");
        height = GetInt();
    }
    while(height < 0 || height  > 23);
    
    
    for (int i = 0; i < height; i++)
    {
        for (int j = 1; j <= height; j++)
        {
            if (j + i < height)
            {
                printf(" ");
            }
            else 
            {
                if(i + j == i + height)
                {
                    printf("##\n");
                }
                else
                {
                    printf("#");
                }
            }
        }
    }
}