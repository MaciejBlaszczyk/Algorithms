n = int(input())
numbers = input()
array = numbers.split()
for i in range(n):
    array[i] = int(array[i])
counter = 0
for i in range(1, n):
    if array[i] < array[i-1]:
        print(array[i-1])
        counter = 1
        break
if counter == 0:
    print(array[n-1])