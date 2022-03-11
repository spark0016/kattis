x = input()

char = ['A' ,'a']

result = ''

for i in x:
    if i in char:
        result = x[x.index(i):]
        break

if result != '':
    print(result)
