from audioop import reverse


def areAllDigitsOdd(n):
    while n > 0:
        r = n % 10
        if r % 2 == 0:
            return 0
        n //= 10
    return 1    
def reverseNumber(n):
    reverse = 0
    while n > 0:
        r = n % 10
        n //= 10
        reverse = reverse * 10 + r
    return reverse

def isReverse(n):
    number = n + reverseNumber(n)
    if n % 10 == 0:
        return 0
    if areAllDigitsOdd(number):
        return n
    return 0

count = 0
for k in range (4):
    count = 0
    for i in range(10**k):
        if isReverse(i):
            print(i)
            count += 1
    print(count)
#134