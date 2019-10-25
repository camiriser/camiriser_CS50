#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, string argv[])
{
    int error = 1;
    int p = 0;
    
    if(argc < 2 || argc > 2 || argv[1] == NULL)
    {
        printf("%i\n", error);
        return 1;
        p = 1;
    }
    
    string k = argv[1];
    int lk = strlen(argv[1]);
    
    for(int j = 0; j < lk; j ++)
    {
        if(isdigit(k[j]))
        {
            p = 1;
        }
    }
    
   if(p==1)
    {
        printf("%i\n", error);
        return 1;
    }
    else
    {
    
    //printf("Type the message you want to encrypt: \n");
    string phrase = GetString();
    int lp = strlen(phrase);
    
    int i = 0;
    int temp = 0;
    
    int indi = 0;
    
   
    while (i <= lp - 1)
    {
        if (temp > lk - 1)
        {
            temp = 0;
        }
        
         
        if ((int) k [temp] < 91)
        {
            indi = (k[temp] - 65);
        }
        else if ((int) k [temp] > 96)
        {
            indi = (k[temp] - 97);
        }
        
       
        if(i == lp - 1)
        {
           if(islower((int) phrase[i]))
            {
                if(122 -((int) phrase[i] + indi) >= 0)
                {
                    printf("%c\n", (char) ((int) phrase[i] + indi));
                    temp = temp + 1; 
                }
                else
                {
                    int aux = ((int) phrase[i] + indi) - 122;
                    printf("%c\n", (char) (96 + aux));
                    temp = temp + 1;
                }
            }
            else if(isupper((int) phrase[i]))
            {
                if(90 - ((int) phrase[i] + indi) >= 0)
                {
                    printf("%c\n", (char) ((int) phrase[i] + indi));
                    temp = temp + 1;
                }
                else
                {
                    int aux = ((int) phrase[i] + indi) - 90;
                    printf("%c\n", (char) (64 + aux));
                    temp = temp + 1;
                }
            }
            else
            {
                printf("%c\n", (char) phrase[i]);
            }
        }
        else
        {
            if(islower((int) phrase[i]))
            {
                if(122 -((int) phrase[i] + indi) >= 0)
                {
                    printf("%c", (char) ((int) phrase[i] + indi));
                    temp = temp + 1; 
                }
                else
                {
                    int aux = ((int) phrase[i] + indi) - 122;
                    printf("%c", (char) (96 + aux));
                    temp = temp + 1;
                }
            }
            else if(isupper((int) phrase[i]))
            {
                if(90 - ((int) phrase[i] + indi) >= 0)
                {
                    printf("%c", (char) ((int) phrase[i] + indi));
                    temp = temp + 1;
                }
                else
                {
                    int aux = ((int) phrase[i] + indi) - 90;
                    printf("%c", (char) (64 + aux));
                    temp = temp + 1;
                }
            }
            else
            {
                printf("%c", (char) phrase[i]);
            }
        }
        
    i = i + 1;
    }
    }
}





