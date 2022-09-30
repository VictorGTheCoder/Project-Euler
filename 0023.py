
def d(n):
    somme = 0
    for i in range(1, n// 2 +1):
        if n % i == 0:
            somme += i
    return somme



#n < d(n) : abundant number
#n = d(n) : perfect number
#n > d(n) : deficient number

abundant_nb = []

def generating_list_of_abundant_number(i): #until n
    for n in range(i):
        if (n < d(n)):
            abundant_nb.append(n)
            print(n)


generating_list_of_abundant_number(28123)
print(abundant_nb)

def is_the_sum_of_two_abundants(nb):
    for nb1 in abundant_nb:
        for nb2 in abundant_nb:
            if (nb2 + nb1 > nb):
                break
            if (nb2 + nb1 == nb):
                return (1)
    print(nb)
    return (0)
                


result = 0

for i in range (28123):
    if is_the_sum_of_two_abundants(i) == 0:
        result += i

print(result)

        
                
    
                
            