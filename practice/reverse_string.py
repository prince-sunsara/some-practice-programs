# REVERSE A STRING 
x = 'abcde'
rev =''
for i in range(len(x)-1, -1, -1):
    print(x[i])
    rev += x[i]
print(rev)