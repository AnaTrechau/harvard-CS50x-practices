# About Cash :money_with_wings:

Cash is a program that counts how many coins someone gave in change. For this program, CS50 gave me half of the coding done and I had to create the functions.

*What was implemented by CS50 VS what was implemented by me is marked with comments in the code.*

## Functions I implemented: :woman_technologist:

- **get_cents:** Get´s input from user of how much the customer is owed.
- **calculate_quarters:** If the number of cents is bigger than 25, it subtracts 25 from your total cents and adds 1 to the quarter counter.
- **calculate_dimes:** If the number of cents is bigger than 10, it subtracts 10 from your total cents and adds 1 to the dimes counter.
- **calculate_nickels:** If the number of cents is bigger than 5, it subtracts 5 from your total cents and adds 1 to the nickels counter.
- **calculate_pennies:** If the number of cents is bigger than 1, it subtracts 1 from your total cents and adds 1 to the pennies counter.

## Main variables :abc:

- **cents:** Holds the value inputed by the user.
- **quarter, dimes, etc:** Are the counters for each coin type.

## Libraries :books:

- **cs50.h** : CS50's main library with get input functions.
- **stdio.h**: Standard IO, which I´ll use the functions printf to print  strings on the screen.

