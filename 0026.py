
from itertools import cycle

def isCycleFinish(cycle, nb):
    digits = nb%10
    for d in cycle:
        if(d == digits):
            nb *= 10
            digits = nb%10
        else:
            return (0)
    return(1)


def getCycleSize(nb):
    cycle = []
    while(1):
        nbt = nb
        nb *= 10
        digits = int(nb%10)
        cycle.append(digits)
        print(digits)
        if (cycle[0] == digits and len(cycle) > 1):
            print(cycle)
            if(isCycleFinish(cycle,nbt) == 1):
                return(len(cycle))




def fraction(n):
    for i in range(7,n+1,1):
        nb = 1/i
        if (int(nb) != nb):
            x = getCycleSize(nb)
            print(x)

fraction(10)