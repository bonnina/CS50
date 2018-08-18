#include <cs50.h>
#include <stdio.h>

int main ()

{
    int n;
    
    printf ("Height: ");
    n = GetInt();
    while (n < 0 || n > 23)
     {
       printf ("Retry: ");
       n = GetInt();   
     }
    
    for (int h = 1; h <= n; h++)
       {
               for (int i = 1; i <= n - h; i++)
                       printf(" ");
               for (int i = n - h + 1; i <= n + 1; i++)
                       printf("#");
               printf("\n");
       }
}