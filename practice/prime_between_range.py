# PRINT PRIME NUMBER IN A GIVEN RANGE

start = int(input("Enter first number : "))
end = int(input("Enter second number : "))

def isPrime(num):
    for i in range(2, num):
        if num % i == 0:
            return 0
    return 1

for i in range(start, end+1):
    if isPrime(i):
        print(i)
