best = 0;

def check_if_prime(nb):
    i = 2;
    while (i<nb/i + 1):
        if (nb % i == 0):
            return (0);
        i += 1;
    return(nb);

def create_list_prime(start,end):
    premiers = [];
    
    while(start <= end):
        if (check_if_prime(start) != 0):
            premiers.append(start);
        start += 1;
    return premiers;
        
listepremiers = create_list_prime(0,7000);
    
candidatspremier = create_list_prime(990000,1000000);

best = 0;
def best_streak_of_each_prime(cprime):
    cbest = 0;
    n = 0;
    while (n < len(listepremiers) - 200):
        j = 0;
        total = 0;
        while (total <= cprime):
            total += listepremiers[n+j];
            if (total == cprime):
                cbest = j + 1;
                ##print("Current best for ", cprime, " is ", cbest);
                return cbest, cprime;
                
            j += 1;
        n += 1;
    return (0,cprime);

result = 0;
resulttemp = 0;
finalprime = 0;
for p in candidatspremier:
    resulttemp, prime = best_streak_of_each_prime(p);
    if (resulttemp > result):
        result = resulttemp;
        finalprime = prime;
        print(result, ":", finalprime);
