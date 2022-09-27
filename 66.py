
##x^2 - Dy^2 = 1




from cmath import sqrt
from multiprocessing import reduction
ymax = 3000
xmax = 70000
ymin = 2000
xmin = 55000
step = 1
def find_sol_precis(d,x):
    end = x - step
    while (x > end):
        c = x**2
        y = ymin
        while(y < ymax):
            if (c - d*(y**2) == 1):
                return x, y
            print(x, y)
            y += 1
        x = x - 1
    return 0, 0


def find_sol(d):
    x = xmin
    while(x < xmax):
        y = ymin
        c = x**2
        while(y < ymax):
            if (c - d*(y**2) < 0):
                break
            if (c - d*(y**2) == 1):
                return x, y
            y += 1
        if (c - d*(y**2) > 0):
            return (0, 0)
        x += step
    return 0, 0

def check_if_square(nb):
    i = 0
    while (i*i <= nb):
        if (i * i == nb):
            return (1)
        i += 1
    return 0

bestx = 0
for i in range(950,1000, 1):
    if (check_if_square(i) == 0):
        x, y = (find_sol(i))
        if (x == 0):
            print("I = ", i, " PAS DE SOL DANS L'INTERVALE CHOSI")
        else:
            print("I = ", i ,"x,y ", x, ",", y)
            if (x > bestx):
                bestx = x
                besty = y
                besti = i
    else:
        print("I = ", i, "IS A SQUARE")
print("------------------")
print("I", besti,"BEST-X", bestx, "BEST-Y", besty)
