print(0)
print(1)

counter = 2

def fibo(first, second):
    global counter
    if counter <= 15:
        cur = first + second
        print(cur)
        second = first
        first = cur
        counter += 1
        fibo(first, second)
    else:
        return

fibo(1,0)