from re import U


unites = ['one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine', 'ten', 'eleven', 'twelve', 'thirteen', 'fourteen', 'fifteen', 'sixteen', 'seventeen', 'eighteen', 'nineteen']
dizaines = ['twenty', 'thirty', 'forty', 'fifty', 'sixty', 'seventy', 'eighty', 'ninety']
extra = ['hundred', 'thousand']

result = 0
for i in range(1001):
    u = i%10
    d = (i//10)%10
    c = (i//100)%10
    if i == 1000:
        result += len(extra[1])
        result += len(unites[0])
        print(unites[0], extra[1])
    else:
        if c != 0:
            print(unites[(i//100)%10 - 1], extra[0], end=" ")
            result += len(unites[(i//100)%10 - 1]) + len(extra[0])
            if i%100 != 0:
                print("and", end=" ")
                result += 3
        if i%100 != 0:
            if d < 2:
                print(unites[(i % 100) - 1])
                result += len(unites[(i %100 - 1)])
            else:
                print(dizaines[d - 2],end=" ")
                result += len(dizaines[d - 2])
                if u != 0:
                    print(unites[u - 1])
                    result += len(unites[u - 1])
                else:
                    print()
        else:
            print()

print(result)