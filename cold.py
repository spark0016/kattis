x = int(input())
result = 0

temps = list(map(int, input().split()))

for i in temps:
    if i < 0:
        result += 1

print(result)
