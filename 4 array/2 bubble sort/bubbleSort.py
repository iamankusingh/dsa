# bubble sort python algorithm
array = [12,45,15,7,21,2,7,11,9]
print("Orignal array is ", array)

def bubble_sort(array):
    n = len(array)
    
    for i in range(n-1):
        terminateLoop = True
        for j in range(n-i-1):
            if array[j] > array[j+1]:
                array[j], array[j+1] = array[j+1], array[j]
                terminateLoop = False
        if terminateLoop:
            break

    return array

print("Array after Bubble sort ", bubble_sort(array))