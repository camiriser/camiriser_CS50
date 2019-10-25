#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, string argv[])
{
    int error = 1;
   if(argc < 2 || argc > 2 || argv[1] == NULL)
    {
        printf("%i\n", error);
        return 1;
    }
    else
    {
    //return 0;
    int k = atoi(argv[1]);
    double div = k / 26;
    int ent = (int) div;
    
    if (k > 25)
    {
        k = k - (ent*26);
    }
    
    //printf("Type the message you want to encrypt: \n");
    string phrase = GetString();
    //printf("%s, %i, %i\n", phrase, ent, k);
    //printf("%s\n", phrase);
    
    for (int i = 0, n = strlen(phrase); i < n; i++)
    {
        if(i == n-1)
        {
    
            if(islower((int) phrase[i]))
            {
                if(122 - ((int) phrase[i] + k) > 0)
                {
                    printf("%c\n", (char) ((int) phrase[i] + k));
                }
                else
                {
                    int aux = ((int) phrase[i] + k) - 122;
                    printf("%c\n", (char) (96 + aux));
                }
            }
            else if(isupper((int) phrase[i]))
            {
                if(90 - ((int) phrase[i] + k) > 0)
                {
                    printf("%c\n", (char) ((int) phrase[i] + k));
                }
                else
                {
                    int aux = ((int) phrase[i] + k) - 90;
                    printf("%c\n", (char) (64 + aux));
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
                if(122 - ((int) phrase[i] + k) > 0)
                {
                    printf("%c", (char) ((int) phrase[i] + k));
                }
                else
                {
                    int aux = ((int) phrase[i] + k) - 122;
                    printf("%c", (char) (96 + aux));
                }
            }
            else if(isupper((int) phrase[i]))
            {
                if(90 - ((int) phrase[i] + k) > 0)
                {
                    printf("%c", (char) ((int) phrase[i] + k));
                }
                else
                {
                    int aux = ((int) phrase[i] + k) - 90;
                    printf("%c", (char) (64 + aux));
                }
            }
            else
            {
                    printf("%c", (char) phrase[i]);
            }
        }
    }
    }
}





