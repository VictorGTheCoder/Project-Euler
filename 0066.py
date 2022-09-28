
##x^2 - Dy^2 = 1


import math
import time
start_time = time.time()

from cmath import sqrt
ymax = 1
xmax = 150000000
ymin = 1
xmin = 1
step = 1
def is_square(i):
    if (math.isqrt()):
        return (i)
    else:
        return (0)
##def is_square(i: int) -> bool:
    ##return i == math.isqrt(i) ** 2
y = 0

def is_square(num: int):
    y = math.sqrt(num)
    if (y.is_integer()):
        return y
    return 0

def check_if_square(nb):
    i = 0
    while (i*i <= nb ):
        if (i * i == nb):
            return (i)
        i += 1
    return 0

def find_sol(d):
    x = xmin
    while(x < xmax):
        yc = (1-x*x)/(-d)
        if (int(yc) == yc): 
            y = is_square(yc)
            if ( y != 0):
                return (x,y)
        ##if (is_square(int(yc)) == True):
            ##return (x,yc)
        ##if (yc > 0 and check_if_square(yc) != 0):
           ## return (x,check_if_square(yc))
        x += step
    return 0, 0


bestx = 0
for i in range(100, 200, 1):
    if (check_if_square(i) == 0):
        checkpoint = time.time()
        x, y = (find_sol(i))
        if (x == 0):
            print("I = ", i, " PAS DE SOL DANS L'INTERVALE CHOSI")
        else:
            print("I = ", i ,"x,y ", x, ",", y, "    %s s" % (time.time() - checkpoint))
            if (x > bestx):
                bestx = x
                besty = y
                besti = i
    else:
        print("I = ", i, "IS A SQUARE")
print("------------------")
print("I", besti,"BEST-X", bestx, "BEST-Y", besty)
print("TOTAL TIME %s seconds " % (time.time() - start_time))
print(is_square(12))
print(is_square(16))
