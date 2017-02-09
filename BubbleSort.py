n = input()
a = input()
array = a.split()


def bubbleSort(array, arrayLength):
    if arrayLength == 1:
        return
    counter = 1
    while counter != 0:
        counter = 0
        for i in range(arrayLength - 1):
            if array[i + 1] < array[i]:
                temp = array[i]
                array[i] = array[i + 1]
                array[i + 1] = temp
                counter += 1


bubbleSort(array, int(n))

print(" ".join(array))
