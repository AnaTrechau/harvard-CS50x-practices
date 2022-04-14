# About Mario :man_mechanic::turtle::princess:

Just like in Week 1, Mario problem set is divided in **mario less** , for those less comfortable with coding, and **mario more** for those more comfortable.

The challenge is the same, printing a # pyramid using a loop with height defined by the user.

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


## Mario less:mount_fuji:

For Mario less to work and print the left pyramid, we need to understand the dynamic between the # symbols and the space bars.

### Logic behind the code :woman_technologist:

The logic stays the same, but instead of 3 loops, this program has only 2:

- **Row loop:** Basically the main loop. It´s the one that keeps the **column** loop running. When the **row** == **height**, the loop (and program) ends.
- **Column loop**: Decides whether the computer should print a 'space' or a '# ' based on this logic: *print spaces if row + column < height - 1.*

**Where's the space loop?**

Since python works different, we don't need a different loop just for to count the spaces. We can do that with a conditional inside the column code.

### Main variables :abc:

- **height: **Stores user input
- **row**: Used on row loop
- **column:** Defines # per column inside row loop.

### Libraries :books:

No additional libraries for this code either.

## Mario more:mount_fuji::mount_fuji:

Just like mario less, this is a more succint code than the C version of it, with less loops, but the same logic on it. In case you don' t remember, Mario more has some additional features: All the logic applied until now for the left pyramid stays the same. All I did was define the space between the  two pyramids and the right pyramid.

### Logic behind the code :woman_technologist:

- **Row loop:** Basically the main loop. It´s the one that keeps the **column** loop running. When the **row** == **height**, the loop (and program) ends.
- **Column loop**: Decides whether the computer should print a 'space' or a '# ' based on this logic: *print spaces if row + column < height - 1.*
- **Space between walls loop:** To define where the spaces between the 2 pyramids go, we use s*pace == height or space == height+1*. This loop also has a different length, instead of just height, it covers the whole "grid", using *height*2+1.
- **Column two loop:** Loop that prints the second pyramid, using the reverse logic of the first column.

### Main variables :abc:

- **height: **Stores user input
- **row**: Used on row loop
- **column:** Defines # per column inside row loop.
- **spaces:** Define spaces in space loop.
- **column2:** Responsible for the second pyramid print.

### Libraries :books:

No additional libraries for this code.

