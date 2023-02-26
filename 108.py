# 1/x + 1/y = 1/n

from timeit import default_timer




def fonc():
    n = 5920
    while (True):
        count = 0
        a = 1
        print(n)
        while(a <= n**2):
            b = n**2 / a
            if (b == int(b)):
                count += 1
                if (b != 1):
                    aa = int(n**2 / (b - 1))   
                    if (aa != a):
                        print(a, aa)
                        a = aa
                    else:
                        a += 1
                else:
                    a += 1
            if (b != 0):
                aa = int(n**2 / (b - 1))   
                if (aa != a):
                    print(a, aa)
                    a = aa
                else:
                    a += 1
            if (a > 100 and count < 35):
                break
            if (count > 1000):
                return (n)
        n += 1

start = default_timer()
print(fonc())

duration = default_timer() - start
print(duration)