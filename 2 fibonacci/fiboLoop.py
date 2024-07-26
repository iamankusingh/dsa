first = 0
second = 1

print(first)
print(second)

for i in range(1, 19):
    cur = first + second
    print(cur)
    first = second
    second = cur