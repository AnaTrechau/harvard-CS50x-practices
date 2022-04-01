# About Caesar :amphora:

Caesar is a program that allows you to encrypt messages by changing  the position of letters by a determined number of places. 

Here is a practical example:

![image-20220323154312623](https://i.imgur.com/WPBlxo7.png)

## Program's logic :woman_technologist:

Caesar is divided in 3 major pieces:

- **Command-line arguments checking:** Verifies if the user inputed a valid command-line argument.

  **Note:** *This was my first program where main() function got arguments*.

- **Getting inputs and loop to print encrypt characters:** Gets the plain text and uses a loop to call a function which rotates the character based on the key provided via command-line arguments and prints every character of ciphered text

- **Rotate function:** Contains the logic to ensure that only alphabetical characters will be rotated.

## Main variables :abc:

- argc: It´s one of main() arguments. It holds the number of arguments inputed in main (int type).

- argv: Also one of main() arguments. It´s an array[] that holds all the strings typed by the user when calling main().

- argvlen: Length of argv[1]

- key: Holds the argv[1] value, but converted to an int.

- len: Message length.

- message: String that holds plaintext.

- rotate(): Function that defines which characters must be rotated.

  

## Libraries :books:

- **cs50.h** : CS50's main library with **get input** functions.
- **stdio.h**: Standard IO, which I´ll use the functions **printf** to print  strings on the screen.
- **ctype.h:** Has functions that help on defining a character type. Used **isalpha** and **isupper** and **islower**.
- **string.h:** Used **strlen** function to get the string length.
- **stdlib.h**: Used **atoi** function which turns a character into an integer.

 
