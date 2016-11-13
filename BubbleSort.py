nk = input()
a = input()
q = input()
n = (nk.split())[0]
k = (nk.split())[1]
questions = q.split()
array = a.split()

answers = []


def binary_search(array, number, length_of_array):
    first = 0
    last = length_of_array - 1
    while first <= last:
        midpoint = (first + last) // 2
        if array[midpoint] == number:
            while midpoint > 0 and (array[midpoint] == array[midpoint - 1]):
                midpoint -= 1
            return str(midpoint + 1)
        else:
            if number < array[midpoint]:
                last = midpoint - 1
            else:
                first = midpoint + 1
    return '-1'


for number in questions:
    answers.append(binary_search(array, number, len(array)))

print(" ".join(answers))