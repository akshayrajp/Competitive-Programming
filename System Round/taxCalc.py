# A program to calculate tax based on income

# ----------------------------------------------------------------------------------------

def menu():
    print("""
1. Enter income
2. Enter exemption
3. Exit
""")
    while(True):
        try:
            option = int(input())
            if(type(option) == int):
                break
        except:
            print('Please enter a valid option. Try again.')
    return option

# ----------------------------------------------------------------------------------------


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
    print("\n")
    # slabRanges will consist the slabs in the following format
    # [minRange, maxRange, percentage] for each slab
    for i in range(0, numberOfSlabs):
        slabRanges.append([0] * 3)

    print("\n")
    for i in range(0, numberOfSlabs):
        # the very first slab
        if(i == 0):
            slabRanges[i][0] = 0
            while(True):
                slabRanges[i][1] = int(input(
                    f"Enter max range of slab {i+1}: "))
                if(type(slabRanges[i][1]) == int and (slabRanges[i][1] > 0)):
                    break
                else:
                    print("Please enter a valid number for range")
                    continue

        # the very last slab
        elif(i == numberOfSlabs - 1):
            slabRanges[i][1] = 0
            while(True):
                slabRanges[i][0] = int(input(
                    f"Enter min range of slab {i+1}: "))
                if(type(slabRanges[i][0]) == int and (slabRanges[i][0] > 0) and (slabRanges[i][0] > slabRanges[i-1][1])):
                    break
                else:
                    print("Please enter a valid number for range")
                    continue

        # all the slabs in between
        else:
            while(True):
                slabRanges[i][0] = int(input(
                    f"Enter min range of slab {i+1}: "))
                if(type(slabRanges[i][0]) == int and (slabRanges[i][0] > 0) and (slabRanges[i][0] > slabRanges[i-1][1])):
                    break
                else:
                    print("Please enter a valid number for range")
                    continue
            while(True):
                slabRanges[i][1] = int(input(
                    f"Enter max range of slab {i+1}: "))
                if(type(slabRanges[i][1]) == int and (slabRanges[i][0] > 0) and (slabRanges[i][1] > slabRanges[i][0])):
                    break
                else:
                    print("Please enter a valid number for range")
                    continue

        # percentage for each slab
        while(True):
            slabRanges[i][2] = float(input(
                f"Enter tax percentage of slab {i+1}: "))
            if(type(slabRanges[i][2]) == float and slabRanges[i][2] >= 0):
                break
            else:
                print("Please enter a valid tax percentage")
                continue
        print("\n")

    return [numberOfSlabs, slabRanges]

# ----------------------------------------------------------------------------------------


def taxCalculator(userIncome, numberOfSlabs, slabRanges):
    # Calculate tax based on the tax slabs
    taxAmount = 0
    slabAmount = 0
    tempTax = 0

    for i in range(0, numberOfSlabs):
        if(i == 0):
            if(userIncome > slabRanges[i][1]):
                slabAmount = slabRanges[i][1]
            elif(userIncome < slabRanges[i][1]):
                slabAmount = userIncome
            tempTax = slabAmount * (slabRanges[i][2] / 100)
            taxAmount += tempTax
            print(
                f"\nFor {i+1} slab, slabAmount = {slabAmount}, taxAmount = {tempTax}\n")

        elif(i > 0 and i < numberOfSlabs - 1):
            if(userIncome > slabRanges[i][1]):
                slabAmount = slabRanges[i][1] - slabRanges[i][0]
                tempTax = slabAmount * (slabRanges[i][2] / 100)
                taxAmount += tempTax
                print(
                    f"\nFor {i+1} slab, slabAmount = {slabAmount}, taxAmount = {tempTax}\n")
            elif(userIncome >= slabRanges[i][0] and userIncome <= slabRanges[i][1]):
                if(slabRanges[i][1] - slabRanges[i-1][1] > 1):
                    slabAmount = userIncome - slabRanges[i][0]
                else:
                    slabAmount = userIncome - slabRanges[i-1][1]
                tempTax = slabAmount * (slabRanges[i][2] / 100)
                taxAmount += tempTax
                print(
                    f"\nFor {i+1} slab, slabAmount = {slabAmount}, taxAmount = {tempTax}\n")
        else:
            if(userIncome > slabRanges[i][0]):
                slabAmount = (userIncome) - slabRanges[i][0]
                tempTax = slabAmount * (slabRanges[i][2] / 100)
                taxAmount += tempTax
                print(
                    f"\nFor {i+1} slab, slabAmount = {slabAmount}, taxAmount = {tempTax}\n")

    # # First slab is <= 2,50,000; tax = 0%
    # if(userIncome <= 250000):
    #     taxAmount = 0

    # # Second slab is >= 2,50,001 and <= 5,00,000; tax = 5%
    # if(userIncome >= 250001 and userIncome <= 500000):
    #     slabAmount = (userIncome - 250000)
    #     taxAmount = slabAmount * (0.05)

    # # Third slab is >= 5,00,001 and <= 10,00,000
    # # Now we have to add the tax from previous slab
    # if(userIncome >= 500001 and userIncome <= 1000000):
    #     taxAmount = 12500  # tax from previous slab
    #     taxAmount += (userIncome - 500000) * (0.2)

    # # Fourth and final slab is >= 10,00,000
    # # We have to add the taxes from the previous two slabs
    # if(userIncome > 1000000):
    #     taxAmount = 12500 + (0.2 * 500000)
    #     taxAmount += (userIncome - 1000000) * (0.3)

    # incomeAfterTaxDeduction = userIncome - taxAmount
    # # return [taxAmount, incomeAfterTaxDeduction]

    # Print the output
    print("Tax Amount : {}".format(taxAmount))
    print("Income after Tax Deduction: {}".format(userIncome - taxAmount))


# Print welcome message
print("Welcome to Technovert Tax Calculator.\n")

# Get the number of slabs and the slab ranges from taxSlabGenerator()
# mark
[numberOfSlabs, slabRanges] = taxSlabGenerator()

# Get input
while(True):
    print("Please enter your annual income")
    userIncome = int(input("Amount: "))
    if(type(userIncome) == int and userIncome >= 0):
        break
    else:
        print("Please enter a valid option. Try again.")
        continue


exempetions = {
    {
        'name': 'LIC',
        'amount': 1500,
        'used': False
    },
    {
        'name': 'HLA',
        'amount': 4000,
        'used': False
    },
    {
        'name': 'CLA',
        'amount': 500,
        'used': False
    },
}

# Print menu
while(True):
    option = menu()
    if(option == 3):
        break
    elif(option == 1):
        # Calculate tax and print it out
        taxCalculator(userIncome, numberOfSlabs, slabRanges)
    elif(option == 2):
        # Calculate the exemptions before taxing
        exempetion = ("Enter exemption name : ")
        for i in exempetion:
            if(i['name'] == exempetion):
                if(i['used'] == False):
                    userIncome -= i['amount']
                else:
                    print("Cannot re-use the same exemption again")
