/**
 * recover.c
 *
 * Computer Science 50
 * Problem Set 4
 *
 * Recovers JPEGs from a forensic image.
 */

int main(int argc, char* argv[])
{
    if (argc != 1)
    {
        return 1;
    }
    
    FILE* recover_pointer;
     if (recover_pointer == NULL)
     {
        printf("Could not open file.\n");
        return 2;
     }
    
    recover_pointer = fopen("card.raw", "r");
    
    long n = 0;
    
    while 
    
    
}
