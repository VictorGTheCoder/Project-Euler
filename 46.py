c_number = []
prime_numbers = []
max = 10000

def isComposite(nb):
    for i in range(2, nb):
        if (nb % i == 0):
            return nb
    return (0)

def is_prime(nb):
    nb2 = 2
    while (nb2 < nb//nb2 + 1):
        if (nb % nb2 == 0):
            return 0
        nb2 += 1
    return nb
def conjecture(nb):
    for prime in prime_numbers:
        for i in range(10000):
            x = prime + 2*(i*i)
            if x > nb:
                break
            if nb == x:
                print(nb, prime, i)
                return x
    return 0
for i in range(10000):
    if is_prime(i):
        prime_numbers.append(i)

for i in range(max + 1):
    if isComposite(i) and i % 2 == 1:
        x = conjecture(i)
        if x == 0:
            print(i)
            break



