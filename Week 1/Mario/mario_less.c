#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //n = height
    int height;
    do
    {
        height = get_int("Pyramid height: ");
    }
    while (height < 1 || height > 8);

    // for each row,
    for (int row = 0; row < height; row++)
    {
        //For each space; space = height- row - 1 (cause we start counting at 0).
        for (int space = 0; space < height - row - 1; space++)
        {
            printf(" ");
        }
        //for each column;
        for (int column = 0; column <= row; column++)
        {
            printf("#");
        }
        printf("\n");
    }

}