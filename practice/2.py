# program to sum of  first n numbers in O(1)

number = int(input("Enter number:"))
sum = 0
for i in range(1, number+1):
    sum += i

print(sum)