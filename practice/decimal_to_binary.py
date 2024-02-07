# CONVERT DECIMAL NUMBER TO BINARY NUMBER

n = 12
a = ''
while n:
    r = n%2
    a += str(r)
    n = n // 2 

# s = ''
# for i in range(0, len(a)):
    # s += str(a[i])
# print(s[::-1])

print(a[::-1])