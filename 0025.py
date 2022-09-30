import time

def fibor(n):
    if (n  < 2):
        return n
    return (fibo(n - 1) + fibo(n - 2))

def do_contain1000digits(n):
    j = 0
    while n > 0:
        n //= 10
        j += 1
    if j > 999:
        return 1
    return 0



def fibo(n):
    result = 0
    nb1 = 0
    nb2 = 1
    i = 0
    while (i < n-3):
        temp = nb2
        nb2 = nb2 + nb1
        nb1 = temp
        result += nb2
        i += 1
    return result + 2


##TEST for fibonacci iterative and recursive : iterative is way faster O(n) vs O(n^2)
#start_time = time.time()
#print(fibo(35))
#delta_time = time.time() - start_time
#print(delta_time)
#print("-------------------------------------")
#start_time = time.time()
#print(fibor(35))
#delta_time = time.time() - start_time
#print(delta_time)
#print("-------------------------------------")

def fibo1000():
    result = 1
    nb1 = 0
    nb2 = 1
    i = 0
    while (do_contain1000digits(result) == 0):
        temp = nb2
        nb2 = nb2 + nb1
        nb1 = temp
        result += nb2
        i += 1
        
    return result + 1, i + 3


result, index = fibo1000()
print(index, result)