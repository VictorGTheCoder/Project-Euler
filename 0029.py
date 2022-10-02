tab = []

start = 2
end = 5
power = 5
count = 0

list_of_prime = []

def is_prime(nb):

    nb2 = 2
    while (nb2 < nb//nb2 + 1):
        if (nb % nb2 == 0):
            return 0
        nb2 += 1
    return nb



for i in range(start, end + 1):
    x = is_prime(i)
    if (x):
        list_of_prime.append(x)

print(list_of_prime)

def add_in_tab(prime, max):
    i = 1
    x = 0
    count = 0
    while (x <= max):
        x = pow(prime, i)
        tab.append(x)
        count += 1
        i+= 1
    return count

for i in range (end,start - 1, -1):
    for prime in list_of_prime:
        if (i%prime == 0):
            max = pow(prime, power)
            print(prime, max)
            list_of_prime.remove(prime)
            count += add_in_tab(prime, max)
            break

print(list_of_prime)
#print(tab)
print(len(tab))
print(count)

powers = []
for a in range(2, 101):
    for b in range(2, 101):
        powers.append(a**b)
#Suppresion de tous les doublons de la liste powers
resultat = len(list(set(powers)))
print(resultat)