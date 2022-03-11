x = input()

x = x.split('-')

result = ""

for i in x:
    result += i[0]

print(result)
