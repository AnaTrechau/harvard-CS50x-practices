# About Mario :man_mechanic::turtle:

Mario problem set is divided in **mario less** , for those less comfortable with coding, and **mario more** for those more comfortable.

The challenge consists of printing a # pyramid using a loop with height defined by the user.

- **Mario less example:**

  ```
         #
        ##
       ###
      ####
     #####
    ######
   #######
  ########
  ```

- **Mario more example:**

  ```
     #  #
    ##  ##
   ###  ###
  ####  ####
  ```

  

## Mario less :heavy_minus_sign::mount_fuji:

For Mario less to work and print the left pyramid, we need to understand the dynamic between the # simbols and the space bars.

### Logic behind the code :woman_technologist:

Basically we have 3 loops. One for the rows, one for space bars and one for the columns.

- **Row loop:** Basically the main loop. It´s the one that keeps the 2 other loops nested and it´s also the loop defining when to **skip to another row** or when to **end the program** cause once row = height, it means our pyramid is the right size. 
- **Space loop:** We can find out how many spaces to print on each row by using the formula (spaces = height - row - 1).
- **Column loop**: Will print a # for each row while column < row. **Note:** restarts on every row loop, that´s how we make the pyramid.

### Main variables :abc:

- **height: **Stores user input
- **row**: Used on row loop
- **spaces:** Define spaces in space loop
- **column:** Defines # per column inside row loop.

### Libraries :books:

- **cs50.h** : CS50's main library with get input functions.
- **stdio.h**: Standard IO, which I´ll use the functions printf to print  strings on the screen.

## Mario more :heavy_plus_sign::mount_fuji::mount_fuji:

Mario more has just some additional features. All the logic applied until now for the left pyramid stays the same. All I did was define the space between the pyramids and the right pyramid.

### Logic behind the code :woman_technologist:

- **Row loop:** Basically the main loop. It´s the one that keeps the 2 other loops nested and it´s also the loop defining when to **skip to another row** or when to **end the program** cause once row = height, it means our pyramid is the right size. 
- **Space loop:** We can find out how many spaces to print on each row by using the formula (spaces = height - row - 1).
- **Column loop**: Will print a # for each row while column < row. **Note:** restarts on every row loop, that´s how we make the pyramid.
- **Space between walls loop:** For each row, will define 1 space of difference between the ending walls of the pyramids.
- **Pyramid two loop:** Loop that prints the second pyramid.

### Main variables :abc:

- **height: **Stores user input
- **row**: Used on row loop
- **spaces:** Define spaces in space loop
- **column:** Defines # per column inside row loop. Also defines when to print a wall space.
- **reversePy:** Responsible for the second pyramid print

### Libraries :books:

- **cs50.h** : CS50's main library with get input functions.
- **stdio.h**: Standard IO, which I´ll use the functions printf to print  strings on the screen.

