

def fact(n):
    if (int(n) != 1):
        return (int(n) * int(fact(n-1)))
    return n
x = fact(100)
print(x)

somme_digits = 0

while(x > 0):
    somme_digits += (x % 10)
    x //= 10

print(somme_digits)

