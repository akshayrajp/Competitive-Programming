n = int(input())
c = 0
while(n > 0):
    c += (bin(n).count('1'));
    n -= 1
print(c)