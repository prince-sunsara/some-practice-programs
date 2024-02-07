# NUMBER IS PALINDROME OR NODE

n = 12122
original_n = n
rev = 0
while n:
    rev = rev*10 + n%10
    n //= 10
print("Reverse is: ", rev)

if original_n == rev:
    print("number is palindrome")
else:
    print("number is not palindrome")