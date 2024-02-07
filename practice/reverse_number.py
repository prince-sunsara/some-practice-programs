# REVERSE A NUMBER

n = 123456789
rev = 0

while n:
    r = n%10
    n = n // 10
    rev = rev*10 + r

print(rev)