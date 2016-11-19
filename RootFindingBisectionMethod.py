def function(x):
    return x * x * x + 5 * x + 1


def bisection_method():
    point1 = -1
    point2 = 1
    accuracy = 0.001
    value1 = function(point1)
    value2 = function(point2)
    if value1 * value2 > 0:
        print("Error, wrong points")
        return -1
    while abs(point1 - point2) > accuracy:
        root = (point1 + point2) / 2
        root_value = function(root)
        if abs(root_value) < accuracy:
            return root_value
        if root_value * value1 < 0:
            point2 = root
        else:
            point1 = root
            value1 = root_value
    return point1

print(bisection_method())
