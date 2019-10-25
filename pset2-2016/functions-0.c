#include <cs50.h>
#include <stdio.h>

void PrintName(string name)
{
    printf("hello, %s\n", name);
}

int main(void)

{
    printf("your name: ");
    string s = GetString();
    PrintName(s);
}

// Esta es la otra foem de hacerlo declarando la funcion a 
// inicio y usandola posteriormente.

//#include <cs50.h>
//#include <stdio.h>

//void PrintName(string name);

//int main(void)

//{
    //printf("your name: ");
    //string s = GetString();
    //PrintName(s);
//}

//void PrintName(string name)
//{
    //printf("hello, %s\n", name);
//}