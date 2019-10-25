/**
 * copy.c
 *
 * Computer Science 50
 * Problem Set 4
 *
 * Copies a BMP piece by piece, just because.
 */
       
#include <stdio.h>
#include <stdlib.h>

#include "bmp.h"

int main(int argc, char* argv[])
{
    if(argc != 3)
    {
        printf("please enter the name of the file you want to modify \n")
        return 1;
    }
    
    char* infile = argv[1];
    char* otfile = argv[2];
    
    
    
}