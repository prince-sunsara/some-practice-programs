# COUNT NUMBER OF DIGITS IN AN INTEGER AND SUM OF DIGITS

x = 4529
sum = 0
count = 0
while x:
    r = x%10
    sum += r
    x //= 10
    count += 1
print("Digits are : ",count)
print("Sum : ",sum)