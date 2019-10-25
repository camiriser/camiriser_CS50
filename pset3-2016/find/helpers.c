/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>
#include "helpers.h"
#include <math.h>

/**
 * Returns true if value is in array of n values, else false.
 */
 
 void sort(int values[], int n);
// bool search1(int value, int values[], int n)
// {
//     int p = 0;
//     if (n < INT_MAX)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             if (values[i] == value)
//             {
//                 p = 1;
//                 break;
//             }
//         }
        
//         if(p == 1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
        
//     }
//     else
//     {
//         return false;
//     }
// }

//_________________________________________________________________

bool search(int value, int values[], int n)
{
   int lowlim = 0;
   int uplim = n;
   int lenA = uplim - lowlim;
   //int res;
   bool esta = false;
   int aux;
   
   sort (values, n);
   
   if(values[0] == value || values[n] == value)
   {
       esta = true;
   }
   
   while(esta == false && lenA > 1)
   {
       //res = fmod(lenA, 2);
       //if(res == 0)
       //{
           aux = lowlim + ((int) (lenA / 2));
           if(values[aux] == value)
           {
                esta = true;
           }
           else if(values[aux] > value)
           {
                uplim = aux;
                lenA = uplim - lowlim;
           }
           else
           {
                lowlim = aux;
                lenA = uplim - lowlim;
           }
    //   }
    //   else
    //   {
    //         lenA = lenA + 1;
    //         aux = lowlim + (lenA / 2);
    //         if(values[aux] == value)
    //       {
    //             esta = true;
    //       }
    //       else if(values[aux] > value)
    //       {
    //             uplim = aux;
    //             lenA = uplim - lowlim;
    //       }
    //       else
    //       {
    //             lowlim = aux;
    //             lenA = uplim - lowlim;
    //       }
    //   }
   }
   
   if(esta == true )
   {
       return true;
   }
   else
   {
       return false;
   }
    
}

//__________________________________________________________________
/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    int c = 0;
    int aux;
    do
    {
        c = 0;
        for (int i = 0; i < n -1; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(values[i] > values[j])
                {
                    aux = values[j];
                    values[j] = values[i];
                    values[i] = aux;
                    c = c + 1;
                }
            }
        }
        
    }
    while( c != 0);
    return;
}

