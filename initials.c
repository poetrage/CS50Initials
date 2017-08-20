//libraries included
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

//main function
int main(void) 
{
    //define variables
    string name=get_string(); //name input from user
    
// for as long as there are chars in the string iterate through the string
    for (int i = 0; i< strlen(name); i++)
        {
            if (i==0)//if it is the first letter
            {
            printf("%c", toupper(name[i]));//print the letter in uppercase
            }
            else if ((name[i] !=' ') && (name[i-1]==' '))//if it is not a space and the letter before it is a space
            {
            printf("%c", toupper(name[i]));//print the letter in uppercase
            }
        }
        printf("\n");

}











