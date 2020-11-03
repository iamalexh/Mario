#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Enter the height of the pyramid between 1 & 8: ");
    }
    while (n < 1 || n > 8);
    
    for (int i = 0; i < n; i++)
    {
        for (int k = n - i; k > 1; k--)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("  ");
          for (int m = 0; m <= i; m++)
        {
            printf("#");
        }
        printf("\n");
    }
}
