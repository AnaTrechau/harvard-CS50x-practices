# About readability :book:

Readability is a program that indicates the grade in which a person may read a text based on [Coleman-Liau index](https://en.wikipedia.org/wiki/Coleman%E2%80%93Liau_index).

## Program's logic :woman_technologist:

For this program to work, basically we have to gather all the information regards Coleman-Liau index so we can calculate it.

The index can be achieved trough this formula:

> index = 0.0588 * letters / words * 100 - 0.296 * sentences / words * 100 - 15.8

As you can see we need **3** variables: **letters**, **words** and **sentences**.

### Getting data :computer:

To get those 3 variables, we´ll need 3 functions:

- **count_letters**: Calculates how many characters on a string are actually letters. Upper and lowercase considered.
- **count_words:** For this, will consider the definition of words as "strings separated by space bar". We set our space counter as 1 initially, cause the user must input at least one word and then, for each additional space, the word counter increases by 1.
- **count_sentences:** Counts sentences based on the number of ".", "!" or "?" inserted by the user.

### Getting readability and grades :orange_book:

After our functions are ready, we´re able to get all we need for our index, so I just created a variable called **index**, used the formula and we now have a float containing our index.

To indicate what´s the text grade recommendation, we only have to use a math.h function to round the **index**.

## Main variables :abc:

- **text:** String with user input.
- **letters:** Holds how many letters are on the text.
- **word:** Holds the words value acquired from text.
- **sentences:** Holds how many sentences are on text.
- **index**: Get´s Coleman-Liau index so it can be converted into a grade.
- **grade**: Holds converted value.

## Libraries :books:

- **cs50.h** : CS50's main library with get input functions.
- **stdio.h**: Standard IO, which I´ll use the functions **printf** to print  strings on the screen.
- **ctype.h:** Has functions that help on defining a character type. Used **isalpha** and **isspace**.
- **string.h:** Used **strlen** function to get the string length.
- **math.h**: Used **round** function.