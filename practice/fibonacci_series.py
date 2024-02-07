# FIBONACCI SERIES
# 0,1,1,2,3,5,8,13

n = int(input("Enter number: "))
n1=0
n2=1

print(0, end=" ")
print(1, end=" ")
for i in range(2 , n):
    sum = n1 + n2
    print(sum, end=" ")
    n1 = n2
    n2 = sum