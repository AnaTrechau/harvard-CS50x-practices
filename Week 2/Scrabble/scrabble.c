#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // Print the winner
    if (score1 == score2)
    {
        printf("Tie!\n");
    }
    else if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else
    {
        printf("Player 2 wins!\n");
    }
}

int compute_score(string word)
{
    //Compute and return score for string
    int score = 0;
    int len = strlen(word);
    //While letter is less than lenght, the loop will go on
    for (int letter = 0; letter < len; letter++)
    {
        //If the letter of the word is uppercase, it will take it´s ASCII value - A value to find it´s alfabet value, then, the alphabet value will be allocated on POINTS index and the variable acore will
        //get the value and sum with the value previously stored.
        if (isupper(word[letter]))
        {
            score += POINTS[word[letter] - 'A'];
        }
        //Same goes for islower, but here will subtract the ASCII value of a.
        else if (islower(word[letter]))
        {
            score += POINTS[word[letter] - 'a'];
        }
        // If it´s not a letter, score gets +0
        else
        {
            score += 0;
        }
    }
    return score;
}
