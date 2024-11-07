def selection(arr):
    size = len(arr)

    for i in range(0, size-1):
        smalIndex = i;

        for j in range(i, size):
            if arr[smalIndex] > arr[j]:
                smalIndex = j
        # swap
        arr[smalIndex], arr[i] = arr[i], arr[smalIndex]

    print(f"Selection sort arrar is {arr}")

array = [7, 8, 4, 9, 3]
print(f"Original arrar is {array}")

selection(array)