# About Scrabble :bookmark_tabs:

In the game of [Scrabble](https://scrabble.hasbro.com/en-us/rules), players create words to score points, and the number of points is the sum of the point values of each letter in the word.

![scrabble points](https://i.imgur.com/wgSiBeG.png)

## How to play? :keyboard:

Write the word chosen on your turn.

## About the code's logic: :woman_technologist:

When I opened the file, CS50 had already created an array with each letter's point called **POINTS[]** where the index corresponds to a letter of the alphabet. Just like the table above.

Like on the codes from previous weeks, we had to get the input from the players so we could start the game.

### Computing the scores: :100:

To make our scrabble game work, we made a function called **compute_score** that was  a loop responsible for these steps:

- Analyzing every character inside the selected string and checking if either it was an upper or lower.
- Convert this letter using it´s ASCII value.
- Use this converted value as POINTS[] index to get the respective score.
- Sum each character score into a variable called score.
- Return score.

### Deciding the winner: :trophy:

After we have each player score, we just need to analyze who won. For this, I used an if conditional to compare the scores and print the winner depending on the scenario.

- **Tie:** score 1 = score 2
- **Player 1 wins:** score 1 > score 2
- **Player 2 wins:** score 2 > score 1

## Main variables :abc:

- **word1:** String with player 1's word.
- **word2:** String with player 2's word.
- **score1**: Int with player 1's score.
- **score2:** Int with player 2's score.

### compute_score() variables: :abcd:

- **score**: starts as 0, grows depending on the conditionals.
- **len**: holds the length of the string inputed by the user.

## Libraries :books:

- **cs50.h** : CS50's main library with get input functions.
- **stdio.h**: Standard IO, which I´ll use the functions **printf** to print  strings on the screen.
- **ctype.h:** Has functions that help on defining a character type. Used **isupper** and **islower**.
- **string.h:** Used **strlen** function to get the string length.
