# Get input from user
while True:
    try:
        height = int(input("Height: "))
        if 0 < height < 9:
            break
    except ValueError:
        print("Not an int.")
# Write pyramid using rows and columns
for row in range(height):
    for column in range(height):
        # If row+column == height-1 or row+column > height-1, we print a #.
        if row + column < height-1:
            print(" ", end="")
        else:
            print("#", end="")
    for space in range(height*2+1):
        # This pyramid grid size is defined by the formula 2*height+1, so this is the length of our loop.
        # Spaces are only needed when they get to the pyramid height or surpass it by 1.
        if space == height or space == height + 1:
            print(" ", end="")
    for column2 in range(height):
        if column2 <= row:
            print("#", end="")
    print()