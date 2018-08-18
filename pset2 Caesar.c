#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, string argv[])
{
   if (argc != 2)
   {
       printf ("Retry:");
       return 1;
   }
   
    int k = atoi(argv[1]);
    
    string p = GetString();
    int n = strlen(p);
    
    for (int i = 0; i < n; i++)
    {
        if (isalpha (p[i]))
        {
            if (islower(p[i]))
            {
                printf("%c", 'a' + (p[i] + k - 'a') % 26);
            }
            else
                
                printf("%c", 'A' + (p[i] + k - 'A') % 26);
            
        }
        else 
            printf("%c", p[i]);
    }
    printf ("\n");
   
}