import numpy as np
from numpy.polynomial import Polynomial

def f(x):
    #return (x**3)
    return (1 - x + x**2 - x**3 + x**4 - x**5 + x**6 - x**7 + x**8 - x**9 + x**10)

def interpolation_lagrange(x, y):
    i = 0
    ii = 0
    p = 1
    result = 0
    while (i < len(y)):
        p = 1
        while (ii < len(y)):
            if (ii != i):
                p = p*(Polynomial([-x[ii], 1]) / (x[i] - x[ii]))
                #print(Polynomial([-x[ii], 1]) / (x[i] - x[ii]))
            ii += 1
        #print("------------------")
        result += (p * y[i])
        ii = 0
        i += 1
    return (result)

##print("RESULT")
x = [25, 50, 100, 200, 300]
y = [24, 60, 180, 840, 2520]
print(interpolation_lagrange(x, y))

def find_fits(p):
    n = 1
    while (round(p(n)) == f(n)):
        print(p(n), f(n))
        n += 1
    print("BAD", p(n))
    #print(n, p(n))
    return (round(p(n)))


def fonc():
    n = 1
    x = []
    y = []
    FITSsum = 0
    while (n <= 10):
        x.append(n)
        y.append(f(n))
        p = interpolation_lagrange(x, y)
        print("P : ", p)
        if (n != 1):    
            FITSsum += find_fits(p)
        n += 1
    print(FITSsum + 1)
#fonc()

