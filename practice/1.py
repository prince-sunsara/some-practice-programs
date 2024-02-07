# program to generate multiplication table

x = int(input("Enter number to generate multiplication table: "))

for i in range(1, 11):
    print(f"{x} * {i} = {x*i}")