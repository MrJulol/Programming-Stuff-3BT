#!/usr/bin/env python3


def area(a, b):
    return a*b


def circ(a, b):
    x = (2*a) + (2*b)
    return x


a = (float(input("Enter the lenght: ")))
b = (float(input("Enter the withd: ")))

area = area(a, b)
U = circ(a, b)

print(area)
print(U)
