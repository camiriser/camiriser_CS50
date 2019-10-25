#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "structs.h"

#define STUDENTS 3

int main (void)
{
    student students[STUDENTS];
    
    for (int i = 0; i < STUDENTS; i ++)
    {
        printf("student´s name: ");
        students[i].name = GetString();
        
        printf("student´s house: ");
        students[i].house =GetString();
        
    }
    
    FILE* file = fopen("students.cvs", "w");
    if (file != NULL)
    {
        for (int i = 0; i < STUDENTS; i ++)
        {
            fprintf(file, "%s, %s\n", students[i].name, students[i].house);
        }
        fclose(file);
    }
  
    
     for (int i = 0; i < STUDENTS; i ++)
    {
        free (students[i].name);
        free (students[i].house);
    }
}