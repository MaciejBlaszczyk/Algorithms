nk = input()
a = input()
q = input()
n = (nk.split())[0]
k = (nk.split())[1]
questions = q.split()
array = a.split()

answers = []


def binarySearch(array, number, arrayLength):
    first = 0
    last = arrayLength - 1
    while first <= last:
        midPoint = (first + last) // 2
        if array[midPoint] == number:
            while midPoint > 0 and (array[midPoint] == array[midPoint - 1]):
                midPoint -= 1
            return str(midPoint + 1)
        else:
            if number < array[midPoint]:
                last = midPoint - 1
            else:
                first = midPoint + 1
    return '-1'


for number in questions:
    answers.append(binarySearch(array, number, len(array)))

print(" ".join(answers))
