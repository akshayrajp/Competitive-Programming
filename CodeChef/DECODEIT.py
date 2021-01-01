t = int(input())

while(t != 0):

    n = int(input())
    binary = input()

    i = 0
    while(i < n):
        temp = binary[i:i+4]
        print(str(int(n, 2) + 97))
        i += 4

    t -= 1
