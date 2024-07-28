# python program to find minimum value from array
data_array = [45,89,12,56,47,23,21,3,5,64,23,70,69,48]

min_val = data_array[0]

for i in data_array:
    if i < min_val:
        min_val = i

print(f"minimum value is {min_val}")