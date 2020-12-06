from decimal import Decimal

def fib1(n):
    if(n == 0 or n == 1):
        return 1
    else:
        return fib1(n - 1) + fib1(n - 2)
    
def fib2(n, arr):
    if(n == 0 or n == 1):
        return 1
    elif(arr[n] > 0):
        return arr[n]
    else:
        output = fib2(n - 1, arr) + fib2(n - 2, arr)
        arr[n] = output
    return arr[n]

arr = [0]*51

print('%.2E' % Decimal(fib2(50,arr)))
print('%.2E' % Decimal(2**63))