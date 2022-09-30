def d(n):
    i = 1
    somme = 0
    while(n//2 + 1 > i):
        if (n % i == 0):
            somme += i
        i += 1
    return somme


result = 0
for i in range(1,10000):
    r = d(i)
    if (d(r) == i and r != i):

        print(i)
        result += r


print(result)

