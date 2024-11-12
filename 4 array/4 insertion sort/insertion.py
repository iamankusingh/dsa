def insertion(arr):
    size = len(arr)

    for i in range(1,size):
        current = arr[i]
        j=i-1

        while j >= 0 and current < arr[j]:
            arr[j + 1] = arr[j]
            j-=1
        
        # placement
        arr[j + 1] = current;
    
    # print sorted array
    print(f"Insertion sort array is {arr}")

array = [8, 2, 9, 7, 6]
print(f"Original array is {array}")
insertion(array)