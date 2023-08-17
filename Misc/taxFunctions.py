def taxSlabGenerator():
    # Used to generate tax slabs according to user input
    # Get the number of slabs from the user
    while(True):
        try:
            print("Please define how many slabs you want to have ")
            numberOfSlabs = int(input("Enter number : "))
            if(type(numberOfSlabs) == int):
                break
        except:
            print("Please enter a valid number of slabs")

    # Now that we have the number of slabs,
    # we need to get the tax percent for each slab
    # the first slab will be between 0 and lowest value
    # the last slab will be between highest value and infinity

    slabRanges = []

    # slabRanges will consist the slabs in the following format
    # [minRange, maxRange, percentage] for each slab
    for i in range(0, numberOfSlabs):
        slabRanges.append([0] * 3)

    for i in range(0, numberOfSlabs):
        # the very first slab
        if(i == 0):
            slabRanges[i][0] = 0
            while(True):
                try:
                    slabRanges[i][1] = int(input(
                        f"Enter max range of slab {i+1}: "))
                    if(type(slabRanges[i][1]) == int):
                        break
                except:
                    print("Please enter a valid number for range")

        # the very last slab
        elif(i == numberOfSlabs - 1):
            slabRanges[i][1] = 0
            while(True):
                try:
                    slabRanges[i][0] = int(input(
                        f"Enter min range of slab {i+1}: "))
                    if(type(slabRanges[i][0]) == int):
                        break
                except:
                    print("Please enter a valid number for range")

        # all the slabs in between
        else:
            while(True):
                try:
                    slabRanges[i][0] = int(input(
                        f"Enter min range of slab {i+1}: "))
                    if(type(slabRanges[i][0]) == int):
                        break
                except:
                    print("Please enter a valid number for range")
            while(True):
                try:
                    slabRanges[i][1] = int(input(
                        f"Enter max range of slab {i+1}: "))
                    if(type(slabRanges[i][1]) == int):
                        break
                except:
                    print("Please enter a valid number for range")

        # percentage for each slab
        while(True):
            try:
                slabRanges[i][2] = int(input(
                    f"Enter tax percentage of slab {i+1}: "))
                if(type(slabRanges[i][2]) == int):
                    break
            except:
                print("Please enter a valid tax percentage")

    return slabRanges


# slabRanges = taxSlabGenerator()

# # print debug
# for i in range(0, 3):
#     for j in range(0, 3):
#         print(slabRanges[i][j], end=" ")
#     print("")
