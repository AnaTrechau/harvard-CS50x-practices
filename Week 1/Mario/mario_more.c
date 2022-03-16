#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Variable definition
    int height, row, space, column, reversePy;

    //Gets input from user
    do
    {
        height = get_int("Pyramid height: ");
    }
    while (height < 1 || height > 8);

    // for each row, i= row
    for (row = 0; row < height; row++)
    {
        //For each space; space == k; space = height- row - 1 (cause we start counting at 0).
        for (space = 0; space < height - row - 1; space++)
        {
            printf(" ");
        }
        //for each column;
        for (column = 0; column <= row; column++)
        {
            printf("#");
        }
        // Loop to define the spaces between walls, using column = height.
        for (column = height; column == height || column == height + 1; column++)
        {
            printf(" ");
        }
        //Loop with reverse pyramid (reversePy <= row cause it will restart reversePy value based on Rows)
        for (reversePy = 0; reversePy <= row; reversePy++)
        {
            printf("#");
        }
        printf("\n");
    }

}