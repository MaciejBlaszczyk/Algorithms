def function(x):
    return x * x * x + 5 * x + 1


def functionDerivative(x):
    return 3 * x * x + 5


def functionSecondDerivative(x):
    return 6 * x


def secantMethod():
    start = -1
    end = 1
    accuracy = 0.0001

    if function(start) * function(end) > 0:
        print("Error, wrong points")
        return -1
    if function(start) * functionSecondDerivative(end) > 0:
        point2 = start
        point1 = end
    else:
        point2 = end
        point1 = start

    root = point2 - (function(point2) * (point1 - point2))/(function(point1) - function(point2))
    while abs(function(root)) > accuracy:
        point1 = root - (function(root) * (point2 - root))/(function(point2) - function(root))
        point2 = root
        root = point1
    return root

print(secantMethod())


