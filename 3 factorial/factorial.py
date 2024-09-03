#python program to print factorial using recursion
print("---FACTORIAL---")
n = int(input("Enter number : "))

def fact(num):
    return 1 if num == 0 or num == 1 else num * fact(num-1)

print(fact(n))