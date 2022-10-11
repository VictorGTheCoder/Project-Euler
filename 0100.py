from cmath import *


x = (1/2)**(1/2)


def probtest(red_disc, discs):
    print(red_disc/discs-x)
    print((red_disc - 1)/(discs - 1)-x)
    return (red_disc/discs) * ((red_disc - 1)/(discs - 1))


def prob(red_disc, discs):
    result = (red_disc/discs) * ((red_disc - 1)/(discs - 1))
    if result - 1/2 < 0.000000001 and result >= 0.5:
        return 1/2
    return result

#THANKS WOLFRAMALPHA
for n in range(2,20):
    x = (1/4)*((3 - 2*sqrt(2))**n + sqrt(2)*(3 - 2*sqrt(2))**n + (3 + 2*sqrt(2))**n - sqrt(2)*(3 + 2*sqrt(2))**n + 2)
    y = 1/8*(2*(3 - 2*sqrt(2))**n + sqrt(2)*(3 - 2*sqrt(2))**n + 2*(3 + 2*sqrt(2))**n - sqrt(2)*(3 + 2*sqrt(2))**n + 4)
    x = round(abs(x).real) + 1
    y = round(y.real)
    if x > 10**12:
        print(y, x)

