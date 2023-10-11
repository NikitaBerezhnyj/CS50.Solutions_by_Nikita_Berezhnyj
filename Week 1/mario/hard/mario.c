#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    for (int row = 0; row < height; row++) //to print new line as ROW
    {
        for (int space = height - row - 1; space > 0; space--) //to print SPACE
        {
            printf(" ");
        }
        for (int hash = 0; hash < row + 1; hash++) //to print hashes(#)
        {
            printf("#");
        }
        printf("  ");
        for (int space = 0; space < height; space++)
        {
            if (space <= row)
            {
                printf("#");
            }
        }
        printf("\n");
    }
}