//Readability identifier by AnaTrechau
#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

// Function declaration
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

//Variable declaration
int letters, words, sentences;
float index;

int main(void)
{
    //Gets text from user
    string text;
    text = get_string("Text: ");


//Calls functions to determine variables. All functions ara either based on other libraries functions or on ASCII table direct convertion.
    letters = count_letters(text);
    words = count_words(text);
    sentences = count_sentences(text);

//Calculates readability index using the Coleman-Liau index and rounds index on a variable called grade.
    index = 0.0588 * letters / words * 100 - 0.296 * sentences / words * 100 - 15.8;
    int grade = round(index);

//Defines readability based on grade from grade 1 to 16.
    if (grade <= 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }

}

//Function that counts letters from paragraphs based on a loop that gets only alphabetical characters.
int count_letters(string text)
{
    int counter = 0;
    int len = strlen(text);


    for (int i = 0; i < len; i++)
    {
        if (isalpha(text[i]))
        {
            counter++;
        }
        else
        {
            counter += 0;
        }
    }
    return counter;
}

//Function that counts words based on space bars. Counter only increases if isspace is true. Also, I considerede counter = 1 to get the right amount of words.
int count_words(string text)
{
    int counter = 1;
    int len = strlen(text);

    for (int i = 0; i < len; i++)
    {
        if (isspace(text[i]))
        {
            counter++;
        }
        else
        {
            counter += 0;
        }
    }
    return counter;
}

//Function that counts sentences based on . ! and ?
int count_sentences(string text)
{
    int counter = 0;
    int len = strlen(text);

    for (int i = 0; i < len; i++)
    {
        if ((text[i] == 33) || (text[i] == 46) || (text[i] == 63))
        {
            counter++;
        }
        else
        {
            counter += 0;
        }
    }
    return counter;
}