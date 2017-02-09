
def function(x):
    return x * x * x + 5 * x + 1


def functionDerivative(x):
    return 3 * x * x + 5


def functionSecondDerivative(x):
    return 6 * x


def newtonMethod():
    start = -1
    end = 1
    accuracy = 0.0001

    if function(start) * function(end) > 0:
        print("Error, wrong points")
        return -1
    if function(start) * functionSecondDerivative(end) > 0:
        point1 = start
    else:
        point1 = end

    point2 = point1 - function(point1)/functionDerivative(point1)
    while abs(function(point2)) > accuracy:
        point1 = point2 - function(point2) / functionDerivative(point2)
        point2 = point1
    return point2

print(newtonMethod())


