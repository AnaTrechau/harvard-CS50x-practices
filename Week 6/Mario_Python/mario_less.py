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
        #If row+column == height-1 or row+column > height-1, we print a #.
        if row + column < height-1:
            print(" ", end="")
        else:
            print("#", end="")
    print()