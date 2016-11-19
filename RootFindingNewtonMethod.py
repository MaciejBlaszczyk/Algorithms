
def function(x):
    return x * x * x + 5 * x + 1


def function_derivative(x):
    return 3 * x * x + 5


def function_second_derivative(x):
    return 6 * x


def newton_method():
    start = -1
    end = 1
    accuracy = 0.0001

    if function(start) * function(end) > 0:
        print("Error, wrong points")
        return -1
    if function(start) * function_second_derivative(end) > 0:
        point1 = start
    else:
        point1 = end

    point2 = point1 - function(point1)/function_derivative(point1)
    while abs(function(point2)) > accuracy:
        point1 = point2 - function(point2) / function_derivative(point2)
        point2 = point1
    return point2

print(newton_method())


